#ifndef TEMPRETURESENSOR_H
#define TEMPRETURESENSOR_H

#include "WeatherData.h"

class TempretureSensor : public WeatherData
{
public:
    TempretureSensor();
    void getSensorData() override;
};

#endif // TEMPRETURESENSOR_H
