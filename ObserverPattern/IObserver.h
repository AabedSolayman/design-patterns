#ifndef IOBSERVER_H
#define IOBSERVER_H

#include <map>
#include "Sensor.h"

class IObserver
{
public:
    IObserver(){};
    virtual void update(std::map<SensorType,double> sensors_data) = 0;
};

#endif // IOBSERVER_H
