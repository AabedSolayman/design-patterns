#ifndef ISUBJECT_H
#define ISUBJECT_H



/**
*Subject Interface to be implemented by WeatherData
**/
class ISubject
{
public:
    ISubject();
    virtual void registerDisplay()  = 0;
    virtual void removeDisplay()    = 0;
    virtual void notifyDisplays()   = 0;

};

#endif // ISUBJECT_H
