#include "Homepage.h"
#include <QTimer>
#include <QMessageBox>
#include <QPainter>
#include "DataPool.h"
#include "const_def.h"

#pragma execution_character_set("utf-8")

HomePage::HomePage(QWidget* parent)
    : StackPageBase(parent) {
    ui.setupUi(this);

    sensor_ = Sensor::get_sensor(TypeGsrSensor);
    connect(ui.button_open, SIGNAL(clicked()), this, SLOT(st_open()));
    connect(ui.button_send, SIGNAL(clicked()), this, SLOT(st_send()));
    connect(ui.button_receive, SIGNAL(clicked()), this, SLOT(st_receive()));
    connect(ui.button_stop, SIGNAL(clicked()), this, SLOT(st_stop()));
    connect(ui.button_close, SIGNAL(clicked()), this, SLOT(st_close()));
    connect(ui.button_clear, SIGNAL(clicked()), this, SLOT(st_clear()));

    connect(sensor_, SIGNAL(send_ui(QByteArray)), this, SLOT(st_update_raw_output(QByteArray)));
    connect(this, SIGNAL(write_msg(QByteArray)), sensor_, SLOT(st_write_msg(QByteArray)));

    output_timer_ = new QTimer(this);
    connect(output_timer_, SIGNAL(timeout()), this, SLOT(st_update_output()));
    put_data_timer_ = new QTimer(this);
    connect(put_data_timer_, SIGNAL(timeout()), this, SLOT(st_put_data()));

    ui.edit_raw_receive->setText("raw output");
    ui.edit_receive->setText("output");
    ui.edit_send->setText("input");
    ui.edit_receive->setFontPointSize(14);
    ui.edit_send->setFontPointSize(14);
    ui.edit_raw_receive->setFontPointSize(14);

}

HomePage::~HomePage() {
}

void HomePage::paintEvent(QPaintEvent* event) {
    QPainter painter(this);
    mutex_.lock();
    auto draw_curve = [&](int left, int length, int top,  int bottom, QPolygonF poly) {
        int curve_pos = left + (length - poly.size());
        for (int i = 0; i < poly.size(); i++) {
            poly[i].rx() = curve_pos + i;
        }
        QPolygonF temp = poly;
        double min_y = INF;
        double max_y = -INF;
        for (int i = 0; i < temp.size(); i++) {
            float tempy = temp[i].ry();
            //坐标转换
            if (tempy > max_y) {
                max_y = tempy;
            }
            if (tempy < min_y) {
                min_y = tempy;
            }
        }
        if (fabs(max_y - min_y) < 1E-3) {
            max_y += 1;
            min_y -= 1;
        }
        for (int i = 0; i < temp.size(); i++) {
            float tempy = temp[i].ry();
            tempy = tempy - min_y;
            int height = bottom - top;
            double scale = height / (max_y - min_y);
            //绘图上下颠倒
            tempy = bottom - tempy * scale;
            if (tempy < top) {
                tempy = top;
            }
            if (tempy > bottom) {
                tempy = bottom;
            }
            temp[i].ry() = tempy;
        }
        painter.drawPolyline(temp);
    };
    painter.setPen(QPen(Qt::black, 2));
    draw_curve(200, 500, 600, 700, QPolygonF::fromList(data_curve_));
    mutex_.unlock();
    QPoint pt(750, 650);
    if (!data_curve_.isEmpty()) {
        QString current = QString::number(data_curve_.back().y());
        QString text = QString("%1:%2").arg("实时曲线").arg(current);
        painter.drawText(pt, text);
    }
}

void HomePage::reshow(UserData data) {
    QVariantMap temp = data.data_;
    QString name = temp["ENG"].toString();
}

void HomePage::read_data() {

}

void HomePage::st_open() {
    bool ret = sensor_->open();
    if (ret) {
        QMessageBox::information(this, tr("提示"), tr("串口打开成功"));
        output_timer_->start(1000);  // 刷新帧率
        put_data_timer_->start(1000 / 30);
    } else {
        QMessageBox::warning(this, tr("警告"), tr("串口打开失败"));
    }
}

void HomePage::st_send() {
    QByteArray temp = ui.edit_send->toPlainText().toLatin1();
    if (temp.isEmpty()) { //判断发送数据是否为空
        ui.edit_send->append("No message can be sent, Please write something");
    }
    emit write_msg(temp);
}

void HomePage::st_receive() {

}

void HomePage::st_stop() {
}

void HomePage::st_close() {
    sensor_->close();
    output_timer_->stop();  // 刷新帧率
    put_data_timer_->stop();
}


void HomePage::st_clear() {
    ui.edit_raw_receive->setText("");
}

void HomePage::st_update_output() {
    float out = DataPool::instance()->serial_data_.gsr_value;
    if (out < 10000.0) {
        out = 10000.0f;
    }
    if (out > 4700000.0) {
        out = 4700000.0f;
    }
    ui.edit_receive->setText(QString::number(out, 'f', 2));
}

void HomePage::st_update_raw_output(QByteArray raw) {
    QString hex = raw.toHex();
    //all_content_ = all_content_ + hex;
    //if (all_content_.size() > 500) {
    //    all_content_ = "";
    //}
    ui.edit_raw_receive->setText(hex);
}

void HomePage::st_put_data() {
    float data = DataPool::instance()->serial_data_.gsr_value;
    if (data < 10000.0) {
        data = 10000.0f;
    }
    if (data > 4700000.0) {
        data = 4700000.0f;
    }
    auto smooth_push = [](QList<QPointF>& vec, float value, int length) {
        if (vec.empty()) {
            vec.push_back(QPointF(0, value));
            return;
        }
        float sum = 0;
        int start_pos = 0;
        if (vec.size() > length) {
            for (int i = vec.size() - length; i < vec.size(); i++) {
                sum += vec[i].ry();
            }
            sum += value;
            sum /= (length + 1);
        } else {
            for (int i = 0; i < vec.size(); i++) {
                sum += vec[i].ry();
            }
            sum += value;
            sum /= (vec.size() + 1);
        }
        vec.push_back(QPointF(0, sum));
    };
    //基准线
    mutex_.lock();
    smooth_push(data_curve_, data, 3);
    if (data_curve_.length() > curve_length) {
        data_curve_.removeAt(0);
    }
    mutex_.unlock();
    update();
}
