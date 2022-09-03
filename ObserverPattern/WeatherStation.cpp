#include <algorithm>

#include "WeatherData.h"
#include "WeatherStation.h"
#include "Displays/CurrentConditionDisplay.h"
#include "Displays/HeatIndexDisplay.h"


WeatherStation::WeatherStation()
{
    weather_data_ = new WeatherData();

    current_condition_gui_ =
                    new CurrentConditionDisplay(weather_data_);

    head_index_gui_ =
                    new HeatIndexDisplay(weather_data_);
}

WeatherStation::~WeatherStation()
{
    for(ulong i = 0; i <vec_sensors_.size(); i++)
    {
        removeSensor(vec_sensors_.at(i));
    }
    delete weather_data_;
    delete current_condition_gui_;
}


void WeatherStation::addSensor(Sensor * sensor)
{
    vec_sensors_.push_back(sensor);
}

bool WeatherStation::removeSensor(Sensor * sensor)
{
    bool is_removed = false;
    std::vector<Sensor*>::iterator it = std::find(vec_sensors_.begin(),
                                                  vec_sensors_.end(),
                                                  sensor);

    if(std::find(vec_sensors_.begin(), vec_sensors_.end(), sensor) !=
            vec_sensors_.end())
    {
        vec_sensors_.erase(it);
        delete sensor;
        is_removed = true;
    }
    return is_removed;
}

void WeatherStation::updateSensorsMeasurements()
{
    double measurement = 0.0;
    std::map<SensorType, double>  sensors_measurements;
    std::pair<SensorType, double> single_sensors_measurement;

    for(ulong i = 0; i <vec_sensors_.size(); i++)
    {
        single_sensors_measurement.first= vec_sensors_.at(i)->getSensorType();
        single_sensors_measurement.second= vec_sensors_.at(i)->getSensorData();

        sensors_measurements.insert(single_sensors_measurement);
    }
    weather_data_->setMeasurements(sensors_measurements);

}


