#ifndef __SENSOR_MANAGER_H
#define __SENSOR_MANAGER_H

#include "Observer.h"
#include "Sensor.h"

class SensorManager : public Observer {

    private:
    Sensor* m_sensor;

    protected:
    void update() override;

    // ctor and dtor
    public:
    SensorManager(Sensor* sensor);
    ~SensorManager();

    // operators
    public:
    friend bool operator==(const SensorManager&, const SensorManager&);


};

#endif //__SENSOR_MANAGER_H