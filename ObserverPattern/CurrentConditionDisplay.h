#ifndef CURRENTCONDITIONDISPLAY_H
#define CURRENTCONDITIONDISPLAY_H

#include <map>

#include "IObserver.h"
#include "IDisplay.h"

class CurrentConditionDisplay : public IObserver, public IDisplay
{
public:
    CurrentConditionDisplay()   ;

    void update(std::map<SensorType,double> measurements)   override    ;
    void display()                                          override    ;

private:
    std::map<SensorType,double> measurements_;
};

#endif // CURRENTCONDITIONDISPLAY_H
