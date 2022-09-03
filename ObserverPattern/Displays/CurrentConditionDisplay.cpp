#include "CurrentConditionDisplay.h"
#include <iostream>

CurrentConditionDisplay::CurrentConditionDisplay(ISubject *weather_data)
{
    this->weather_data_ = weather_data;
    weather_data_->registerObserver(this);
}

CurrentConditionDisplay::~CurrentConditionDisplay()
{
}

void CurrentConditionDisplay::update(std::map<SensorType,double> measurements)
{
    this->measurements_  = measurements;
    display();
}

void CurrentConditionDisplay::display()
{

    std::map<SensorType,double>::iterator it;

    for (it = measurements_.begin(); it != measurements_.end(); it++)
    {
        std::cout << "Sensor Type: "
                  << Sensor::SensorToString(it->first)
                  << " | Sensor Data:"
                  << it->second
                  << std::endl;
    }
}
