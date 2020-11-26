#pragma once
#include <QObject>
#include <QSerialPort>
#include <thread>
#include <QSerialPortInfo>

enum CameraType {
    TypeCommonSensor,
    TypeGsrSensor,
};

class Sensor : public QObject {
    Q_OBJECT
public:
    Sensor() {};
    ~Sensor() {};
    virtual bool open() = 0;
    virtual void close() = 0;

    static Sensor* get_sensor(CameraType type);
};

