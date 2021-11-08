#ifndef __SENSOR_H
#define __SENSOR_H

#include <vector>
#include "Subject.h"

// forward declaration to avoid circular dependencies problems
class SensorManager;

class Sensor : public Subject {

    // ctors & dtors
    public:
    Sensor();
    ~Sensor();

    // observers
    private:
    std::vector<Observer*>   m_manager;

    public:
    void attach(Observer*) override;
    void detach(Observer*) override;
    void notify() override;


};

#endif