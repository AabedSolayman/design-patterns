#ifndef CURRENTCONDITIONDISPLAY_H
#define CURRENTCONDITIONDISPLAY_H

#include <map>

#include "IObserver.h"
#include "IDisplay.h"
#include "ISubject.h"

class CurrentConditionDisplay : public IObserver, public IDisplay
{
public:
    CurrentConditionDisplay(ISubject* weather_data)   ;
    virtual ~CurrentConditionDisplay()                ;

    void update(std::map<SensorType,double> measurements)   override    ;
    void display()                                          override    ;
    std::string getDisplayName()override {return "CurrentConditionDisplay";}

private:
    ISubject* weather_data_;
    std::map<SensorType,double> measurements_;
};

#endif // CURRENTCONDITIONDISPLAY_H
