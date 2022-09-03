#include "WeatherData.h"
#include <algorithm>
#include <iostream>

WeatherData::WeatherData()
{

}
WeatherData::~WeatherData()
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

void WeatherData::setMeasurements(std::map<SensorType,double> measurements)
{
    this->measurements_ = measurements;
    measurementesChanged();
}


void WeatherData::setMeasurements(SensorType type, double measurement)
{
    std::map<SensorType,double>::iterator it = this->measurements_.find(type);
    if(it != this->measurements_.end())
        this->measurements_.at(type) = measurement;
    else
        this->measurements_.insert(std::pair<SensorType,double>(type, measurement));

    measurementesChanged();
}

std::map<SensorType,double> WeatherData::getMeasurements()
{
    return measurements_;
}
