#include <iostream>

#include "SensorManager.h"

// ctor and dtor
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


void SensorManager::update()
{
    std::cout << "Value has changed, it is now " << this->m_sensor->getValue() 
    << this->m_sensor->getUnit();
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
int SensorManager::getId() const {
    return this->id;
}


// operators
/**
 * @brief Equality operator for the SensorManager class, comparison based
 * on the ids of the two SensorManager 
 * 
 * @param op1 operand one 
 * @param op2 operand two
 * @return true if the adresses of the two operands are the same
 * @return false otherwise
 */
bool operator==(const SensorManager& op1, const SensorManager& op2) {
    printf("comparison is called");
    if (op1.getId() == op2.getId())
        return true;
    else return false;
}