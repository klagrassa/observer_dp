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
   this->m_manager.push_back(observer); 
   for (unsigned int it = 0; it < this->m_manager.size(); it++)
   {
       std::cout << &(this->m_manager[it]) << std::endl;
   }
}

void Sensor::detach(Observer* observer)
{
    for (unsigned int i = 0; i < this->m_manager.size(); i++)
    {
        if (observer == this->m_manager.at(i))
        ;
    }
}

/**
 * @brief Notify all the observer attached that the sensor has changed 
 * it's value 
 * 
 */
void Sensor::notify()
{
    // loop through the observers to update them
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