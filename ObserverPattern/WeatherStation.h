#ifndef WEATHERSTATION_H
#define WEATHERSTATION_H

#include <vector>

#include "Sensor.h"

class WeatherStation
{
public:
    WeatherStation();

private:
    std::vector<Sensor*> vec_sensors_  ;

    void addSensor(Sensor* sensor)     ;
    bool removeSensor(Sensor* sensor)  ;

};

#endif // WEATHERSTATION_H
