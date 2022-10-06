#include "SteamedMilk.hpp"

SteamedMilk::SteamedMilk(Beverage * beverage):beverage_(beverage)
{
}

std::string SteamedMilk::getDescription()
{
    return beverage_->getDescription() + " + Steamed Milk";
}

double SteamedMilk::cost()
{
    return beverage_->cost() + 0.10;
}
