#ifndef SENSOR_H
#define SENSOR_H

#include <string>

enum class SensorType
{
    TEMPERATURE = 1,
    PRESSURE    = 2,
    HUMIDITY    = 3
};

class Sensor
{
public:
    Sensor();

    virtual double getSensorData()      = 0 ;
    virtual std::string getSensorName() = 0 ;

};

#endif // SENSOR_H
