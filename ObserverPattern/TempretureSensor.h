#ifndef TEMPRETURESENSOR_H
#define TEMPRETURESENSOR_H

#include "WeatherData.h"

class TempretureSensor : public Sensor
{
public:
    TempretureSensor();
    double getSensorData() override;
};

#endif // TEMPRETURESENSOR_H
