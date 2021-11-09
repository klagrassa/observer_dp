#include "LightSensor.h"

/**
 * @brief Construct a new Light Sensor:: Light Sensor object
 * Default constructor
 */
LightSensor::LightSensor() {
    this->setUnit("Lux");
    this->setValue(0);
}

/**
 * @brief Construct a new Light Sensor:: Light Sensor object
 * 
 * @param value actual value of the sensor 
 */
LightSensor::LightSensor(double value) {
    this->setUnit("Lux");
    this->setValue(value);
}