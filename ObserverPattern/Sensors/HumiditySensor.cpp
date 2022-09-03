#include "HumiditySensor.h"

HumiditySensor::HumiditySensor()
{

}
HumiditySensor::~HumiditySensor()
{

}
double HumiditySensor::getSensorData()
{
    sensor_data_ = 50;
    return sensor_data_;
}

SensorType HumiditySensor::getSensorType()
{
    return SensorType::HUMIDITY;
}
