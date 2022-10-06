#ifndef MOCHA_HPP
#define MOCHA_HPP

#include "CondimentDecorator.hpp"
#include "Coffees/Beverage.hpp"

class Mocha : public CondimentDecorator
{
public:
    Mocha(Beverage * beverage);
    virtual ~Mocha(){};

    virtual std::string getDescription() override ;
    virtual double cost() override;
private:
    Beverage * beverage_;
};

#endif // MOCHA_HPP
