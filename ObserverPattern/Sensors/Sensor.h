#ifndef SENSOR_H
#define SENSOR_H

#include <string>
#include <iostream>
enum class SensorType
{
    TEMPERATURE = 1,
    PRESSURE    = 2,
    HUMIDITY    = 3
};


class Sensor
{
public:
    Sensor(){};
    virtual ~Sensor(){};

    virtual double getSensorData()      = 0 ;
    virtual SensorType getSensorType()  = 0 ;

    const static std::string SensorToString(SensorType sensor_type) throw()
    {
        switch (sensor_type)
        {
            case SensorType::TEMPERATURE: return "TEMPERATURE ";
            case SensorType::PRESSURE   : return "PRESSURE ";
            case SensorType::HUMIDITY   : return "HUMIDITY ";
            default: throw std::invalid_argument("Unimplemented Sensor");
        }
    }

};


#endif // SENSOR_H
