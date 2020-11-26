#include "configpage.h"
#include <QLineEdit>
#include <QCheckBox>
#include <QRadioButton>
#include <iostream>
#include <QSerialPortInfo>
#include <QMessageBox>

#include <QTextCodec>
#include "const_def.h"
#pragma execution_character_set("utf-8")

ConfigPage::ConfigPage(QWidget* parent)
    : StackPageBase(parent) {
    ui.setupUi(this);
    //读配置文件
    configIni = new QSettings("config.txt", QSettings::IniFormat);
    QTextCodec* codec = QTextCodec::codecForName("utf-8");
    configIni->setIniCodec(codec);
    data_pool_ = DataPool::instance();
    QString port = configIni->value("Param/port").toString();
    int baud = configIni->value("Param/baud_rate").toInt();
    int datab = configIni->value("Param/data_bit").toInt();
    int stop = configIni->value("Param/stop_bit").toInt();
    int check = configIni->value("Param/check_bit").toInt();
    data_pool_->config_data_.com_port_ = port;
    data_pool_->config_data_.baud_rate_ = baud;
    data_pool_->config_data_.data_bit_ = datab;
    data_pool_->config_data_.stop_bit_ = stop;
    data_pool_->config_data_.check_bit_ = check;

    init_page();
    connect(ui.bt_save, SIGNAL(clicked()), this, SLOT(st_bt_save()));
    bind_btn_state();
}

ConfigPage::~ConfigPage() {

}


void ConfigPage::reshow(UserData data) {
    QVariantMap temp = data.data_;
    QString name = temp["ENG"].toString();

    init_page();
    ui.combo_port->setCurrentText(data_pool_->config_data_.com_port_);
    ui.combo_baud->setCurrentText(QString::number(data_pool_->config_data_.baud_rate_));
    ui.combo_data_bit->setCurrentText(QString::number(data_pool_->config_data_.data_bit_));
    ui.combo_stop_bit->setCurrentText(QString::number(data_pool_->config_data_.stop_bit_));
    ui.combo_check_bit->setCurrentText(QString::number(data_pool_->config_data_.check_bit_));
    save_data();
    ui.bt_save->setEnabled(false);
}


void ConfigPage::init_page() {
    ui.tabWidget->setCurrentIndex(0);
    //串口
    auto port_infos = QSerialPortInfo::availablePorts();
    ui.combo_port->clear();
    for (auto p : port_infos) {
        QString com = p.portName();
        ui.combo_port->addItem(com);
    }
    //波特率
    QStringList bauds;
    bauds << "115200";
    ui.combo_baud->clear();
    for (auto baud : bauds) {
        ui.combo_baud->addItem(baud);
    }
    //数据位
    QStringList data_bits;
    data_bits << "8";
    ui.combo_data_bit->clear();
    for (auto data_bit : data_bits) {
        ui.combo_data_bit->addItem(data_bit);
    }
    //停止位
    QStringList stop_bits;
    stop_bits << "1";
    ui.combo_stop_bit->clear();
    for (auto stop_bit : stop_bits) {
        ui.combo_stop_bit->addItem(stop_bit);
    }
    //校验位
    QStringList check_bits;
    check_bits << "0";
    ui.combo_check_bit->clear();
    for (auto check_bit : check_bits) {
        ui.combo_check_bit->addItem(check_bit);
    }
    //ui.radio_file->sethu
}

void ConfigPage::st_bt_save() {
    check();
    save_data();
    update_page();
    QMessageBox::information(this, tr("提示"), tr("保存成功"));
}

int ConfigPage::check() {
    //参数合法性检查
    return 0;
}

void ConfigPage::save_data() {
    QString port = QString::fromStdString(ui.combo_port->currentText().toStdString());
    int baud = ui.combo_baud->currentText().toInt();
    int datab = ui.combo_data_bit->currentText().toInt();
    int stop = ui.combo_stop_bit->currentText().toInt();
    int check = ui.combo_check_bit->currentText().toInt();
    //存内存
    data_pool_->config_data_.com_port_ = port;
    data_pool_->config_data_.baud_rate_ = baud;
    data_pool_->config_data_.data_bit_ = datab;
    data_pool_->config_data_.stop_bit_ = stop;
    data_pool_->config_data_.check_bit_ = check;
    //存配置文件
    configIni->setValue(QString("%1/%2").arg("Param").arg("port"), port);
    configIni->setValue(QString("%1/%2").arg("Param").arg("baud_rate"), baud);
    configIni->setValue(QString("%1/%2").arg("Param").arg("data_bit"), datab);
    configIni->setValue(QString("%1/%2").arg("Param").arg("stop_bit"), stop);
    configIni->setValue(QString("%1/%2").arg("Param").arg("check_bit"), check);
}



void ConfigPage::update_page() {
    ui.bt_save->setEnabled(false);
}

void ConfigPage::bind_btn_state() {
    //设置按钮状态
    auto bt_save = [&]() {
        ui.bt_save->setEnabled(true);
    };
    QList<QGroupBox*> all_gbox_list = ui.tab->findChildren<QGroupBox*>();
    for (auto gbox : all_gbox_list) {
        connect(gbox, &QGroupBox::clicked, bt_save);
    }
    QList<QCheckBox*> all_cbox_list = ui.tab->findChildren<QCheckBox*>();
    for (auto cbox : all_cbox_list) {
        connect(cbox, &QCheckBox::clicked, bt_save);
    }
    QList<QLineEdit*> all_ledit_list = ui.tab->findChildren<QLineEdit*>();
    for (auto edt : all_ledit_list) {
        connect(edt, &QLineEdit::textEdited, bt_save);
    }
    QList<QRadioButton*> all_rbtn_list = ui.tab->findChildren<QRadioButton*>();
    for (auto rbtn : all_rbtn_list) {
        connect(rbtn, &QRadioButton::clicked, bt_save);
    }
    QList<QComboBox*> all_combox_list = ui.tab->findChildren<QComboBox*>();
    for (auto combox : all_combox_list) {
        connect(combox, static_cast<void(QComboBox::*)(int)>(&QComboBox::currentIndexChanged), bt_save);  //重载 需强制转化类型
    }

}


