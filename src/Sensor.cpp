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
}

/**
 * @brief Destroy the Sensor:: Sensor object
 * Default destructor
 */
Sensor::~Sensor()
{
   
}

void Sensor::attach(Observer* observer)
{
   this->m_managers.push_back(observer);
}

void Sensor::detach(Observer* observer)
{
    for (vector<int>::iterator i = m_managers.begin(); i != m_managers.end(); ++i)
    {
        if(observer == m_managers[i]){
            m_managers.erase(i);
        }
    }
}

/**
 * @brief Notify all the observer attached that the sensor has changed 
 * it's value 
 * 
 */
void Sensor::notify()
{
    for (vector<int>::iterator i = m_managers.begin(); i != m_managers.end(); ++i)
   {
       m_managers[i].update();
   }
}


// operators


void Sensor::displayObservers(){
    for (vector<int>::iterator i = m_managers.begin(); i != m_managers.end(); ++i)
   {
       std::cout << std::to_string(m_managers[i].getId()) << std::endl;
   }
// get / set
/**
 * @brief Set the unit of the Sensor 
 * 
 * @param unit string corresponding to the unit the sensor measures 
 */
void Sensor::setUnit(std::string unit) {
    this->m_unit = unit;
}

/**
 * @brief Return the unit measured by the Sensor 
 * 
 * @return std::string string corresponding to the unit the sensor measures
 */
std::string Sensor::getUnit() {
    return this->m_unit;
}

/**
 * @brief Set the value of the sensor 
 * 
 * @param value actual value of the sensor 
 */
void Sensor::setValue(double value) {
    this->m_value = value;
}

/**
 * @brief Return the value measured by the Sensor 
 * 
 * @return double measure of the Sensor
 */
double Sensor::getValue() {
    return this->m_value;

}