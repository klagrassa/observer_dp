#include "SensorManager.h"

// ctor and dtor
SensorManager::SensorManager(Sensor sensor)
{
    this->sensor = sensor;
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
    if (op1 == op2)
        return true;
    else return false;
}