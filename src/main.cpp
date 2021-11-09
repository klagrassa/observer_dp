#include <iostream>
#include <unistd.h>
#include "Sensor.h"
#include "SensorManager.h"

int main()
{
    SensorManager* salon = new SensorManager(1);
    SensorManager* cuisine = new SensorManager(2);
    SensorManager* chambre = new SensorManager(3);

    Sensor* first = new Sensor();
    Sensor* second = new Sensor();

    std::cout 
    << "==========================="
    << std::endl
    << "Observer design pattern"
    << std::endl
    << "==========================="
    << std::endl;

    first->attach(salon);
    first->attach(cuisine);
    first->attach(chambre);

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
    << "Display observers first sensor"
    << std::endl
    << "================================"
    << std::endl;
    first->displayObservers(); 
    sleep(2);


    std::cout 
    << "==============================="
    << std::endl
    << "Changing values of the sensors"
    << std::endl
    << "================================"
    << std::endl;
    sleep(2);

    first->setUnit("degrees celsius");
    first->setValue(30);
    second->setUnit("lumens");
    second->setValue(300.0);

    for (int i=0; i < 5 ;i++)
    {
        std::cout 
        << "**********************"
        << std::endl;
    }

    sleep(2);
    first->detach(cuisine);
    first->setValue(15);
    second->attach(cuisine);

    std::cout
    << "First sensor managers : "
    << std::endl
    << "================================"
    << std::endl;
    first->displayObservers(); 

    std::cout
    << "Second sensor managers : "
    << std::endl
    << "================================"
    << std::endl;
    second->displayObservers();

    return 0;
}