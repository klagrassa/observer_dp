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

void Sensor::attach(SensorManager* observer)
{
   this->m_manager.push_back(observer); 
}

void Sensor::detach(SensorManager* observer)
{
    for (unsigned int i = 0; i < this->m_manager.size(); i++)
    {
        if (observer == this->m_manager.at(i))
        ;
    }
}

void Sensor::notify()
{

}

// operators
