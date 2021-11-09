#ifndef __TEMPERATURESENSOR_H
#define __TEMPERATURESENSOR_H

#include "Sensor.h"

class TemperatureSensor final : public Sensor {

    public:
    TemperatureSensor();
    TemperatureSensor(double value);
    ~TemperatureSensor();
};

#endif // __TEMPERATURESENSOR_H