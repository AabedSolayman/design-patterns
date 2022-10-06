#include "Mocha.hpp"

Mocha::Mocha(Beverage * beverage):beverage_(beverage)
{
}

std::string Mocha::getDescription()
{
    return beverage_->getDescription() + " + Mocha";
}

double Mocha::cost()
{
    return beverage_->cost() + 0.20;
}
