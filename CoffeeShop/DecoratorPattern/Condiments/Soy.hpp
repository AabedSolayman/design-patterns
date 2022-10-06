#ifndef SOY_HPP
#define SOY_HPP

#include "Coffees/Beverage.hpp"
#include "CondimentDecorator.hpp"

class Soy : public CondimentDecorator
{
public:
    Soy(Beverage * beverage);
    virtual ~Soy(){};

    virtual std::string getDescription() override ;
    virtual double cost() override;
private:
    Beverage * beverage_;
};

#endif // SOY_HPP
