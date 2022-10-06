#ifndef ESPRESSO_HPP
#define ESPRESSO_HPP

#include "Beverage.hpp"
class Espresso : public Beverage
{
public:
    Espresso();
    virtual ~Espresso(){};

    std::string description = "Espresso";
    virtual std::string getDescription() override {return description;}
    double cost() override { return 1.99;}
};

#endif // ESPRESSO_HPP
