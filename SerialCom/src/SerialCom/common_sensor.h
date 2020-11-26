#pragma once
#include <QObject>
#include <QSerialPort>
#include <thread>
#include <QSerialPortInfo>
#include "Sensor.h"


class CommonSensor : public Sensor {
    Q_OBJECT
private:
    CommonSensor();
    ~CommonSensor();
public:
    static CommonSensor* instance();
    virtual bool open();
    virtual void close();
    bool start_collect();
    void stop_collect();

private slots:
    void read_data();
    void st_write_msg(QByteArray);

signals:
    void send_ui(QByteArray);
private:
    QStringList all_dev_names_;
    QSerialPort* serial_;
    void set_param();
    void parse_data(QByteArray data);


    bool               exit_ = false;
    std::thread        read_thread_;
    std::vector<float> gsr_buffer_;
    float              gsr_avg_value_ = 0.0f;
    int                gsr_state_ = 0;
    QByteArray  all_buf_;

};

