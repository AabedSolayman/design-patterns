#ifndef STEAMEDMILK_HPP
#define STEAMEDMILK_HPP

#include "Coffees/Beverage.hpp"
#include "CondimentDecorator.hpp"

class SteamedMilk : public CondimentDecorator
{
public:
    SteamedMilk(Beverage * beverage);
    virtual ~SteamedMilk(){};

    virtual std::string getDescription() override ;
    virtual double cost() override;
private:
    Beverage * beverage_;
};

#endif // STEAMEDMILK_HPP
