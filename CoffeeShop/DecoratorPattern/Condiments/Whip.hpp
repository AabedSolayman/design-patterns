#ifndef WHIP_HPP
#define WHIP_HPP

#include "Coffees/Beverage.hpp"
#include "CondimentDecorator.hpp"

class Whip : public CondimentDecorator
{
public:
    Whip(Beverage * beverage);
    virtual ~Whip(){};

    virtual std::string getDescription() override ;
    virtual double cost() override;
private:
    Beverage * beverage_;
};

#endif // WHIP_HPP
