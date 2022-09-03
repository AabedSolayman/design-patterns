#ifndef HUMIDITYSENSOR_H
#define HUMIDITYSENSOR_H

#include "Sensor.h"

class HumiditySensor : public Sensor
{
public:
    HumiditySensor();
    ~HumiditySensor() override;

    double getSensorData() override;
    SensorType getSensorType() override;

private:
    double sensor_data_ = 0.0;
};

#endif // HUMIDITYSENSOR_H
