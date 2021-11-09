#include "TemperatureSensor.h"

/**
 * @brief Construct a new Temperature Sensor:: Temperature Sensor object
 * Default constructor
 */
TemperatureSensor::TemperatureSensor() {
    this->setUnit("Celsius");
    this->setValue(0);
}

/**
 * @brief Construct a new Temperature Sensor:: Temperature Sensor object
 * 
 * @param value actual value of the sensor 
 */
TemperatureSensor::TemperatureSensor(double value) {
    this->setUnit("Celsius");
    this->setValue(value);
}