#ifndef WEATHERSTATION_H
#define WEATHERSTATION_H

#include <vector>
#include <map>

#include "Sensors/Sensor.h"
#include "Displays/CurrentConditionDisplay.h"
#include "WeatherData.h"

class WeatherStation
{
public:
    WeatherStation();
    ~WeatherStation();
    void addSensor(Sensor* sensor)     ;
    bool removeSensor(Sensor* sensor)  ;
    void updateSensorsMeasurements()   ;

private:
    std::vector<Sensor*>      vec_sensors_           ;
    WeatherData*              weather_data_          ;
    CurrentConditionDisplay * current_condition_gui_ ;


};

#endif // WEATHERSTATION_H
