#include "CurrentConditionDisplay.h"
#include <iostream>

CurrentConditionDisplay::CurrentConditionDisplay()
{

}

void CurrentConditionDisplay::update(std::map<SensorType,double> measurements)
{
    this->measurements_  = measurements;
    display();
}

void CurrentConditionDisplay::display()
{
    std::cout << "Displaying new measurements" <<std::endl;
}
