#include <iostream>

#include "SensorManager.h"

// ctors and dtor
/**
 * @brief Construct a new Sensor Manager:: Sensor Manager object
 * 
 * @param id id of the SensorManager
 */
SensorManager::SensorManager(int id) {
    this->setId(id);
    this->m_sensor = nullptr;
}


/**
 * @brief Construct a new Sensor Manager:: Sensor Manager object
 * 
 * @param sensor the sensor to attach to this observer
 */
SensorManager::SensorManager(Sensor* sensor, int id)
{
    this->m_sensor = sensor;
    this->setId(id);
}

SensorManager::~SensorManager()
{

}

/**
 * @brief Update function. Prints the new values of the sensor 
 * 
 */
void SensorManager::update()
{
    std::cout 
    << "Manager " << this->getObserverId() 
    <<  ", value has changed, it is now " 
    << this->m_sensor->getValue() 
    << " " 
    << this->m_sensor->getUnit()
    << std::endl
    << "Data sent to the command system" << std::endl;
}

// get / set
void SensorManager::setId(int id) {
    if (id > 0)
        this->id = id;
}

/**
 * @brief Return the id of the SensorManager
 * 
 * @return int the id of the SensorManager 
 */
int SensorManager::getObserverId() {
    return this->id;
}

void SensorManager::setSensor(Sensor* sensor) {
    this->m_sensor = sensor;
}

Sensor* SensorManager::getSensor() {
    return this->m_sensor;
}
