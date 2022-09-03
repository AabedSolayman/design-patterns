#ifndef WEATHERSTATION_H
#define WEATHERSTATION_H

#include <vector>
#include <map>

#include "Sensor.h"
#include "WeatherData.h"
#include "CurrentConditionDisplay.h"
class WeatherStation
{
public:
    WeatherStation();
    ~WeatherStation();
    void addSensor(Sensor* sensor)     ;
    bool removeSensor(Sensor* sensor)  ;
    void getSensorsMeasurements()      ;

private:
    std::vector<Sensor*>      vec_sensors_           ;
    WeatherData*              weather_data_          ;
    CurrentConditionDisplay * current_condition_gui_ ;


};

#endif // WEATHERSTATION_H
