#ifndef __SENSOR_MANAGER_H
#define __SENSOR_MANAGER_H


#include "Observer.h"
#include "Sensor.h"

class SensorManager final : public Observer {

    private:
    Sensor* m_sensor;

    public:
    void update() override;

    // ctor and dtor
    public:
    SensorManager(int id);
    SensorManager(Sensor* sensor, int id);
    ~SensorManager();

    // get / set
    void setId(int id);
    int getObserverId() override;
    void setSensor(Sensor*);
    Sensor* getSensor();

};

#endif //__SENSOR_MANAGER_H