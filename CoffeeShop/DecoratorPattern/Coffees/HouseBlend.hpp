#ifndef HOUSEBLEND_HPP
#define HOUSEBLEND_HPP

#include "Beverage.hpp"

class HouseBlend : public Beverage
{
public:
    HouseBlend();
    virtual ~HouseBlend(){};
    std::string description = "House Blend";
    virtual std::string getDescription() override {return description;}
    double cost() override { return 0.89;}
};

#endif // HOUSEBLEND_HPP
