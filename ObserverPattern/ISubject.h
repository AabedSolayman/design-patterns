#ifndef ISUBJECT_H
#define ISUBJECT_H

#include "IObserver.h"


/**
*Subject Interface to be implemented by WeatherData
**/
class ISubject
{
public:
    ISubject();
    virtual void registerObserver(IObserver* observer)  = 0;
    virtual void removeObserver(IObserver* observer)    = 0;
    virtual void notifyObservers()                      = 0;

};

#endif // ISUBJECT_H
