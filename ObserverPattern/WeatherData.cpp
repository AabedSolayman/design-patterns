#include "WeatherData.h"
#include <algorithm>

WeatherData::WeatherData()
{

}

void WeatherData::registerObserver(IObserver* observer)
{
    vec_observers_.push_back(observer);
}

void WeatherData::removeObserver(IObserver *observer)
{
    std::vector<IObserver*>::iterator it = std::find(vec_observers_.begin(),
                                                     vec_observers_.end(),
                                                     observer);

    vec_observers_.erase(it);
    if (it != vec_observers_.end())
        vec_observers_.erase(it);

}

void WeatherData::notifyObservers()
{
    for(uint i = 0; i < vec_observers_.size(); i++)
    {
        vec_observers_.at(i)->update(this->measurements_);
    }
}

void WeatherData::measurementesChanged()
{
    notifyObservers();
}

void WeatherData::setMeasurements(std::map<SensorType,double> measurement)
{
    this->measurements_ = measurement;
    measurementesChanged();
}


void WeatherData::setMeasurements(std::pair<SensorType,double> measurement)
{
    this->measurements_.at(measurement.first) = measurement.second;
    measurementesChanged();
}

std::map<SensorType,double> WeatherData::getMeasurements()
{
    return measurements_;
}
