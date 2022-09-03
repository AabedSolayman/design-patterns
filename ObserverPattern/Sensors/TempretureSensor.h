#ifndef TEMPRETURESENSOR_H
#define TEMPRETURESENSOR_H

#include "Sensor.h"

class TempretureSensor : public Sensor
{
public:
    TempretureSensor()  ;
    virtual ~TempretureSensor() ;


    double     getSensorData() override ;
    SensorType getSensorType() override ;
private:
    double sensor_data_ = 0.0;
};

#endif // TEMPRETURESENSOR_H
