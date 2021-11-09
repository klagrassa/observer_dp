#ifndef __SENSOR_H
#define __SENSOR_H

#include <vector>
#include "Subject.h"


class Sensor : public Subject {

    // ctors & dtors
    public:
    Sensor();
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
    std::string m_unit;

    public:
    void setUnit(std::string unit);
    void setValue(double value);
    std::string getUnit();
    double getValue();

    void displayObservers();
};

#endif