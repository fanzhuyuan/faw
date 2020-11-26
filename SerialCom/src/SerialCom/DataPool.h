#pragma once
#include <QString>
class ConfigData {
public:
    ConfigData() {
    }
    ~ConfigData() {
    }
public:
    QString com_port_ = "COM1";
    int port_index_ = 0;
    int baud_rate_ = 115200;  //波特率
    int data_bit_ = 8;        //数据位
    int stop_bit_ = 1;        //停止位
    int check_bit_ = 0;       //奇偶校验位
};

class SerialData {
public:
    SerialData() {
    }
    ~SerialData() {
    }
public:
    float gsr_value = 0.0f;
};

class DataPool {
public:
    DataPool() {};
    ~DataPool() {};

public:
    static DataPool* instance() {
        static DataPool self;
        return &self;
    };

public:
    ConfigData config_data_;
    SerialData serial_data_;
};