#ifndef __TEMPERATURESENSOR_H
#define __TEMPERATURESENSOR_H

#include "Sensor.h"

class TemperatureSensor final : Sensor {

    // useful data
    private:
    double m_value; /* temperature in celsius */
};

#endif // __TEMPERATURESENSOR_H