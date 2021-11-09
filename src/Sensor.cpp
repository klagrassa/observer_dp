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
}