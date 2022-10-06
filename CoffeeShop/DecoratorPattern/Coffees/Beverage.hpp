#ifndef BEVERAGE_HPP
#define BEVERAGE_HPP

#include<string>

class Beverage
{
public:
    Beverage();
    virtual ~Beverage(){};
    std::string description = "Unknown Beverage";
    virtual std::string getDescription();

    virtual double cost() = 0;
};

#endif // BEVERAGE_HPP
