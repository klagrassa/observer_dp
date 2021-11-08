#ifndef __SENSOR_H
#define __SENSOR_H

#include <vector>

class SensorManager;

class Sensor{

    // ctors & dtors
    public:
    Sensor();
    ~Sensor();

    // useful data
    private:
    double          m_value;

    // observers
    private:
    std::vector<SensorManager>   m_manager;

    public:
    void            attach(SensorManager);
    void            detach(SensorManager);
    void            notify();


};

#endif