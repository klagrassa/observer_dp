#include "SensorManager.h"

// ctor and dtor
/**
 * @brief Construct a new Sensor Manager:: Sensor Manager object
 * 
 * @param sensor the sensor to attach to this observer
 */
SensorManager::SensorManager(Sensor* sensor)
{
    this->m_sensor = sensor;
}

SensorManager::~SensorManager()
{

}


void SensorManager::update()
{

}

// operators
/**
 * @brief Equality operator for the SensorManager class 
 * 
 * @param op1 operand one 
 * @param op2 operand two
 * @return true if the adresses of the two operands are the same
 * @return false otherwise
 */
bool operator==(const SensorManager& op1, const SensorManager& op2)
{
    printf("this one is called");
    // find a way to check the parameters, because there is infinite recursion here
    if (op1 == op2)
        return true;
    else return false;
}