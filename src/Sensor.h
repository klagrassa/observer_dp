#ifndef __SENSOR_H
#define __SENSOR_H

#include "SensorManager.h"

class Sensor {

    // ctors & dtors
    public:
    Sensor();
    ~Sensor();

    // useful data
    private:
    double          m_value;

    // observer
    private:
    SensorManager   m_manager;

    public:
    void            attach(SensorManager);
    void            detach(SensorManager);
    void            notify();


};

#endif