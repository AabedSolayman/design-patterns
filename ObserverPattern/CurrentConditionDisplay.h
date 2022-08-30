#ifndef CURRENTCONDITIONDISPLAY_H
#define CURRENTCONDITIONDISPLAY_H

#include "IObserver.h"
#include "IDisplay.h"

class CurrentConditionDisplay : public IObserver, public IDisplay
{
public:
    CurrentConditionDisplay()   ;

    void update()   override    ;
    void display()  override    ;
};

#endif // CURRENTCONDITIONDISPLAY_H
