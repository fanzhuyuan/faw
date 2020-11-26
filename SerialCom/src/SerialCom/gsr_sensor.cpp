#include "gsr_sensor.h"
#include <QSerialPortInfo>
#include <iostream>
#include "DataPool.h"
#include <QDebug>
#include "logger.h"
#pragma execution_character_set("utf-8")
GsrSensor::GsrSensor() {
    serial_ = new QSerialPort();
}

GsrSensor::~GsrSensor() {
    close();
}

GsrSensor* GsrSensor::instance() {
    static GsrSensor sensor;
    return &sensor;
}

bool GsrSensor::open() {
    serial_->setPortName(DataPool::instance()->config_data_.com_port_); //可直接端口号打开
    if (serial_->isOpen()) {
        return true;
    }
    bool opened = serial_->open(QSerialPort::ReadWrite);
    if (!opened) {
        LogError("GsrSensor open failed");
        return false;
    }
    if (opened) {
        serial_->clearError();
        serial_->close();
        exit_ = false;
        auto func = std::bind(&GsrSensor::raw_read, this);
        read_thread_ = std::thread(func);
    }
    return opened;
}

void GsrSensor::close() {
    exit_ = true;
    file_.close();
    if (read_thread_.joinable()) {
        read_thread_.join();
    }
}

void GsrSensor::st_write_msg(QByteArray msg) {
    serial_->write(msg);
}

bool GsrSensor::start_collect() {
    return true;
}

void GsrSensor::stop_collect() {

}

float GsrSensor::get_value() {
    return 0.0f;
}


bool GsrSensor::port_info() {
    QString com_port = DataPool::instance()->config_data_.com_port_;
    auto port_infos = QSerialPortInfo::availablePorts();
    for (auto p : port_infos) {
        if (p.portName() == com_port) {
            port_info_ = p;
            return true;
        }
    }
    return false;
}

void GsrSensor::raw_read() {
    static int num = 1;
    char name[56] = { 0 };
    sprintf_s(name, "result/raw_%d.txt", num++);
    file_.open(std::string(name), std::ios::ate);
    auto open_func = [&]() {
        serial_->close();
        serial_->clearError();
        serial_->setPortName(DataPool::instance()->config_data_.com_port_);
        bool opened = serial_->open(QSerialPort::ReadWrite);
        if (!opened) {
            LogError("open_func failed: %s", DataPool::instance()->config_data_.com_port_.toStdString().data());
            return false;
        }
        // 初始化
        const char start_code = 0x07;
        opened = serial_->write(&start_code, 1);
        if (!opened) {
            LogError("QSerialPort write failed");
            return false;
        }
        serial_->clearError();
        serial_->waitForReadyRead(1000);
        gsr_state_ = 1;
        return true;
    };
    bool ret = open_func();
    if (!ret) {
        //端口打开失败，重新设置打开
        if (!open_func()) {
            return;
        }
    }
    QByteArray read_buffer;
    while (!exit_) {
        auto ba = serial_->read(6);
        //auto ba = serial_port.readAll();
        read_buffer.push_back(ba);
        if (read_buffer.size() >= 6) {
            if (read_buffer[0] == '\0') {
                QByteArray ba = read_buffer.left(6);
                read_buffer = read_buffer.mid(6);

#if 1
                //写文件
                if (file_.is_open()) {
                    char result_buffer[512] = { 0 };
                    sprintf_s(result_buffer, "%s\n", ba.toHex().toStdString());
                    file_ << std::string(result_buffer);
                    file_.flush();
                }
#endif

                emit send_ui(ba);    /////////////

                parse_data(ba);
            } else {
                read_buffer.clear();
            }
        }

        bool ret = serial_->waitForReadyRead(3000);
        if (!ret) {
            gsr_state_ = 0;
            qDebug() << "disconnected!";
            bool opened = false;
            do {
                opened = open_func();
            } while (!exit_ && !opened);
            continue;
        }

    }


    serial_->close();
}




void GsrSensor::parse_data(QByteArray data) {
    QByteArray info = data;
    if (info.size() == 6 && info.at(0) == '\0') {
        uchar high = info.at(5);
        uchar low = info.at(4);
        int gsr_raw_value = (high & 0x0f) * 256 + low;
        int gsr_range = high >> 6;
        float p1 = 0;
        float p2 = 0;
        switch (gsr_range) {
        case 0:
            p1 = 0.0373;
            p2 = -24.9915;
            break;
        case 1:
            p1 = 0.0054;
            p2 = -3.5194;
            break;
        case 2:
            p1 = 0.0015;
            p2 = -1.0163;
            break;
        case 3:
            p1 = 4.558 * 0.0001;
            p2 = -0.3014;
            break;
        }
        float skin_conductance = (float)gsr_raw_value * p1 + p2;
        float gsr_float_vlue = 1000000.0 / skin_conductance;

        if (gsr_float_vlue > 0) {
            gsr_buffer_.push_back(gsr_float_vlue);
            if (gsr_buffer_.size() > 20)
                gsr_buffer_.erase(gsr_buffer_.begin());
        }
        if (gsr_buffer_.size() == 20) {
            float sum = std::accumulate(gsr_buffer_.begin(), gsr_buffer_.end(), 0.0f);
            if (sum > 0) {
                float  GSR_value = (float)sum / 20.0;
                DataPool::instance()->serial_data_.gsr_value = GSR_value;
#if 0
                //写文件
                if (file_.is_open()) {
                    char result_buffer[512] = { 0 };
                    sprintf_s(result_buffer, "%.2f\n", GSR_value);
                    file_ << std::string(result_buffer);
                    file_.flush();
                }
#endif
            }
        }
        return;
    }
}