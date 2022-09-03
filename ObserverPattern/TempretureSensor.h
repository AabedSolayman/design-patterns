#ifndef TEMPRETURESENSOR_H
#define TEMPRETURESENSOR_H

#include "WeatherData.h"

class TempretureSensor : public Sensor
{
public:
    TempretureSensor()  ;
    virtual ~TempretureSensor() ;

    double sensor_data_ = 0.0;

    double     getSensorData() override ;
    SensorType getSensorType() override ;

};

#endif // TEMPRETURESENSOR_H
