#include "Sensor.h"
#include "common_sensor.h"
#include "gsr_sensor.h"

Sensor* Sensor::get_sensor(CameraType type) {

    switch (type) {
    case TypeCommonSensor:
        return CommonSensor::instance();
        break;
    case TypeGsrSensor:
        return GsrSensor::instance();
        break;
    default:
        return CommonSensor::instance();
        break;
    }
}

