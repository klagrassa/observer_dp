#ifndef __LIGHTSENSOR_H
#define __LIGHTSENSOR_H

#include "Sensor.h"

class LightSensor final : Sensor {

    public:
    LightSensor();
    LightSensor(double value);
    ~LightSensor();
};

#endif // __LIGHTSENSOR_H