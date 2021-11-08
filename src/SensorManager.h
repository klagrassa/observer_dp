#ifndef __SENSOR_MANAGER_H
#define __SENSOR_MANAGER_H

#include "Sensor.h"

class SensorManager {

    private:
    Sensor* m_sensor;

    public:
    void update();

    // ctor and dtor
    public:
    SensorManager(Sensor* sensor);
    ~SensorManager();

    // operators
    public:
    friend bool operator==(const SensorManager&, const SensorManager&);


};

#endif //__SENSOR_MANAGER_H