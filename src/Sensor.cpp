#include <iostream>

#include "Sensor.h"
#include "SensorManager.h"

//ctor and dtor

/**
 * @brief Construct a new Sensor:: Sensor object
 * Default constructor
 */
Sensor::Sensor()
{
    this->m_unit = "";
    this->m_value = -1;
}

/**
 * @brief Construct a new Sensor:: Sensor object
 * 
 * @param unit unit of the sensor
 * @param value actual value of the sensor
 */
Sensor::Sensor(const char* unit, double value)
{
   this->setUnit(unit);
   this->setValue(value); 
}

/**
 * @brief Destroy the Sensor:: Sensor object
 * Default destructor
 */
Sensor::~Sensor()
{}

/**
 * @brief Attach an Observer to the Sensor 
 * 
 * @param observer observer to attach 
 */
void Sensor::attach(Observer* observer)
{
    this->m_managers.push_back(observer);
    // get around the implementation limitations
    dynamic_cast<SensorManager*>(observer)->setSensor(this);
}

void Sensor::detach(Observer* observer)
{
    for (std::vector<Observer*>::iterator it = m_managers.begin(); it != m_managers.end(); ++it)
    {
        if(observer == *it){
            m_managers.erase(it);
        }
    }
    std::cout << "Manager " << observer->getObserverId() << " has been detached" 
    << std::endl;
}

/**
 * @brief Notify all the observer attached that the sensor has changed 
 * it's value 
 * 
 */
void Sensor::notify()
{
    for (std::vector<Observer*>::iterator it = m_managers.begin(); it != m_managers.end(); ++it)
    {
        (*it)->update();
    }
}


// operators
/**
 * @brief Display the observers from the vector list 
 * 
 */
void Sensor::displayObservers(){
    std::cout 
    << "SensorManager id : ";
    for (std::vector<Observer*>::iterator it = m_managers.begin(); it != m_managers.end(); ++it)
    {
        std::cout << (*it)->getObserverId() << " ";
    }
    std::cout << std::endl;
}
// get / set
/**
 * @brief Set the unit of the Sensor 
 * 
 * @param unit string corresponding to the unit the sensor measures 
 */
void Sensor::setUnit(const char* unit) {
    this->m_unit = unit;
}

/**
 * @brief Return the unit measured by the Sensor 
 * 
 * @return const char* string corresponding to the unit the sensor measures
 */
const char* Sensor::getUnit() {
    return this->m_unit;
}

/**
 * @brief Set the value of the sensor 
 * 
 * @param value actual value of the sensor 
 */
void Sensor::setValue(double value) {
    this->m_value = value;
    this->notify();
}

/**
 * @brief Return the value measured by the Sensor 
 * 
 * @return double measure of the Sensor
 */
double Sensor::getValue() {
    return this->m_value;
}