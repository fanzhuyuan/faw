#pragma once
#include <QObject>
#include <QSerialPort>
#include <thread>
#include <QSerialPortInfo>
#include "Sensor.h"
#include <fstream>

class GsrSensor : public Sensor {
    Q_OBJECT
private:
    GsrSensor();
    ~GsrSensor();
public:
    static GsrSensor* instance();
    bool open();
    virtual void close();

    bool start_collect();
    void stop_collect();
    float get_value();
signals:
    void send_ui(QByteArray);

private slots:
    void st_write_msg(QByteArray msg);


private:
    void parse_data(QByteArray data);
    void raw_read();
    bool port_info();

    QSerialPortInfo  port_info_;
    bool               exit_ = false;
    std::thread        read_thread_;
    std::vector<float> gsr_buffer_;
    int                gsr_state_ = 0;

    std::ofstream file_;
    QSerialPort* serial_;

};

