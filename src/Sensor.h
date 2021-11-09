#ifndef __SENSOR_H
#define __SENSOR_H

#include <vector>
#include <string>
#include "Subject.h"


class Sensor : public Subject {

    // ctors & dtors
    public:
    Sensor();
    Sensor(const char* unit, double value);
    ~Sensor();

    // observers

    protected:
    std::vector<Observer*>   m_managers;

    public:
    void attach(Observer*) override;
    void detach(Observer*) override;
    void notify() override;

    protected:
    double m_value;
    const char* m_unit;

    // get / set
    public:
    void setUnit(const char* unit);
    void setValue(double value);
    const char* getUnit();
    double getValue();

    public:
    void displayObservers();
};

#endif