#include "WeatherData.h"
#include "WeatherStation.h"

#include <algorithm>

WeatherStation::WeatherStation()
{

}

void WeatherStation::addSensor(Sensor * sensor)
{
    vec_sensors_.push_back(sensor);

}

bool WeatherStation::removeSensor(Sensor * sensor)
{
    std::vector<Sensor*>::iterator it = std::find(vec_sensors_.begin(),
                                                  vec_sensors_.end(),
                                                  sensor);

    vec_sensors_.erase(it);
    if (it != vec_sensors_.end())
    {
        vec_sensors_.erase(it);
        return true;
    }
    else
    {
        return false;
    }
}
