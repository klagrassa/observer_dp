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

// operators
