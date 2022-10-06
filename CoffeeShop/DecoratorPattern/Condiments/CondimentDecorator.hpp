#ifndef CONDIMENTDECORATOR_HPP
#define CONDIMENTDECORATOR_HPP

#include "Coffees/Beverage.hpp"

class CondimentDecorator : public Beverage
{
public:
    CondimentDecorator();
    virtual ~CondimentDecorator(){};
    double cost() override{return 0.0;}
    std::string getDescription() override{return "";}
};

#endif // CONDIMENTDECORATOR_HPP
