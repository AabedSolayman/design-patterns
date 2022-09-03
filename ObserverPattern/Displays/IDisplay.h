#ifndef IDISPLAY_H
#define IDISPLAY_H

#include <string>
class IDisplay
{
public:
    IDisplay(){};
    virtual void display() = 0;
    virtual std::string getDisplayName() = 0;

};

#endif // IDISPLAY_H
