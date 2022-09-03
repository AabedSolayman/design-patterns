#include "TempretureSensor.h"

TempretureSensor::TempretureSensor()
{
}

TempretureSensor::~TempretureSensor()
{
}

double TempretureSensor::getSensorData()
{
    // get data real sensor
    sensor_data_ = 10.0;
    return sensor_data_;
}

SensorType TempretureSensor::getSensorType()
{
    return SensorType::TEMPERATURE;
}
