#ifndef DARKROAST_HPP
#define DARKROAST_HPP

#include "Beverage.hpp"

class DarkRoast : public Beverage
{
public:
    DarkRoast();
    virtual ~DarkRoast(){};

    std::string description = "Dark Roast";
    virtual std::string getDescription() override {return description;}
    double cost() override { return 0.99;}
};

#endif // DARKROAST_HPP
