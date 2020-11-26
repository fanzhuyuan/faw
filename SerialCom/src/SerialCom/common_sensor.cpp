#include "common_sensor.h"
#include <QSerialPortInfo>
#include <iostream>
#include "DataPool.h"
#include <QDebug>
#pragma execution_character_set("utf-8")


CommonSensor::CommonSensor() {
    serial_ = new QSerialPort();

}

CommonSensor::~CommonSensor() {
    if (serial_) {
        delete serial_;
    }
}

CommonSensor* CommonSensor::instance() {
    static CommonSensor sensor;
    return &sensor;
}

bool CommonSensor::open() {
    if (serial_->isOpen()) {
        close();
    }
    QString com_port = DataPool::instance()->config_data_.com_port_;
    qDebug() << "user port: " << com_port;
    serial_->setPortName(com_port);
    if (!serial_->open(QIODevice::ReadWrite)) {     //用ReadWrite 的模式尝试打开串口
        qDebug() << com_port << "打开失败!";
        perror("open");
        return false;
    } else {
        qDebug() << "open serial success";
    }
    set_param();
    connect(serial_, SIGNAL(readyRead()), this, SLOT(read_data()));
    serial_->setDataTerminalReady(true);
    //初始化串口
    const char start_code = 0x07;
    bool ret = serial_->write(&start_code, 1);
    if (!ret) {
        return false;
    }
    return true;
}

void CommonSensor::set_param() {
    serial_->setBaudRate(DataPool::instance()->config_data_.baud_rate_);//设置波特率
    serial_->setDataBits(QSerialPort::Data8);           //数据位为8位
    serial_->setFlowControl(QSerialPort::NoFlowControl);//无流控制
    serial_->setParity(QSerialPort::NoParity);          //无校验位
    serial_->setStopBits(QSerialPort::OneStop);         //一位停止位
}


void CommonSensor::close() {
    serial_->clear();
    serial_->close();
}

bool CommonSensor::start_collect() {
    return true;
}

void CommonSensor::stop_collect() {

}

void CommonSensor::read_data() {
    QByteArray buf;
    auto ba = serial_->readAll();
    all_buf_.push_back(ba);
    if (all_buf_.size() >= 6) {
        if (all_buf_[0] == '\0') {
            QByteArray ba = all_buf_.left(6);
            all_buf_ = all_buf_.mid(6);
            emit send_ui(ba);
            parse_data(ba);
        } else {
            all_buf_.clear();
        }
    }
}

void CommonSensor::st_write_msg(QByteArray) {

}

void CommonSensor::parse_data(QByteArray data) {
    QByteArray info = data;
    return;
}

