#include <iostream>
#include <unistd.h>
#include "TemperatureSensor.h"
#include "LightSensor.h"
#include "SensorManager.h"

int main()
{
    /* Main scenario */
    /* Create different Observers (SensorManager) and Subjects (Sensor) 
        and attach them together.
        Then values are changed and the observers are notified (print data).
        Observer is detached 
    */

    SensorManager* salon = new SensorManager(1);
    SensorManager* cuisine = new SensorManager(2);
    SensorManager* chambre = new SensorManager(3);

    Sensor* temp_sensor = new TemperatureSensor();
    Sensor* light_sensor = new LightSensor();

    std::cout 
    << "==========================="
    << std::endl
    << "Observer design pattern"
    << std::endl
    << "==========================="
    << std::endl;

    temp_sensor->attach(salon);
    temp_sensor->attach(cuisine);
    temp_sensor->attach(chambre);

    std::cout 
    << "==========================="
    << std::endl
    << "Creation of the managers"
    << std::endl
    << "==========================="
    << std::endl;
    sleep(5);

    std::cout 
    << "================================"
    << std::endl
    << "Display observers temp_sensor sensor"
    << std::endl
    << "================================"
    << std::endl;
    temp_sensor->displayObservers(); 
    sleep(2);


    std::cout 
    << "==============================="
    << std::endl
    << "Changing values of the sensors"
    << std::endl
    << "================================"
    << std::endl;
    sleep(2);

    temp_sensor->setValue(30);
    light_sensor->setValue(300.0);

    for (int i=0; i < 5 ;i++)
    {
        std::cout 
        << "**********************"
        << std::endl;
    }

    sleep(2);
    temp_sensor->detach(cuisine);
    temp_sensor->setValue(15);
    light_sensor->attach(cuisine);

    std::cout
    << "First sensor managers : "
    << std::endl
    << "================================"
    << std::endl;
    temp_sensor->displayObservers(); 

    std::cout
    << "Second sensor managers : "
    << std::endl
    << "================================"
    << std::endl;
    light_sensor->displayObservers();

    // free memory
    delete cuisine;
    delete salon;
    delete chambre;

    delete temp_sensor;
    delete light_sensor;

    return 0;
}