#include "Soy.hpp"

Soy::Soy(Beverage * beverage):beverage_(beverage)
{

}

std::string Soy::getDescription()
{
    return beverage_->getDescription() + " + Soy";
}

double Soy::cost()
{
    return beverage_->cost() + 0.15;
}
