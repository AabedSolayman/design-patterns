#ifndef WEATHERDATA_H
#define WEATHERDATA_H

#include "Isubject.h"

class WeatherData : public ISubject
{
public:
    WeatherData();

    void registerDisplay() override;
    void removeDisplay  () override;
    void notifyDisplays () override;

    void measurementesChanged();
protected:
    virtual void getSensorData() = 0 ;


};


#endif // WEATHERDATA_H
