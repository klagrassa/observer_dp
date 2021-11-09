#ifndef __SENSOR_MANAGER_H
#define __SENSOR_MANAGER_H


#include "Observer.h"
#include "Sensor.h"

class SensorManager final : public Observer {

    private:
    Sensor* m_sensor;
    int id;


    public:
    void update() override;


    // ctor and dtor
    public:
    SensorManager(int id);
    SensorManager(Sensor* sensor, int id);
    ~SensorManager();

    // get / set
    void setId(int id);
    int getId() override;

    // operators
    public:
    //friend bool operator==(const SensorManager&, const SensorManager&);


};

#endif //__SENSOR_MANAGER_H