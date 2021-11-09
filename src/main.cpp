#include <iostream>
#include "Sensor.h"
#include "SensorManager.h"

int main()
{

    Sensor* first = new Sensor();
    first->attach(new SensorManager(first, 1));
    first->attach(new SensorManager(first, 2));
    first->attach(new SensorManager(first, 3));

    


    return 0;
}