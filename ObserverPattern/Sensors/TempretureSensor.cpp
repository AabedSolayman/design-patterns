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
    return 10.0;
}

SensorType TempretureSensor::getSensorType()
{
    return SensorType::TEMPERATURE;
}
