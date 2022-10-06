#include "Whip.hpp"


Whip::Whip(Beverage * beverage):beverage_(beverage)
{
}

std::string Whip::getDescription()
{
    return beverage_->getDescription() + " + Whip";
}

double Whip::cost()
{
    return beverage_->cost() + 0.10;
}
