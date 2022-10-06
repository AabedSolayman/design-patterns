#ifndef DECAF_HPP
#define DECAF_HPP

#include "Beverage.hpp"

class Decaf : public Beverage
{
public:
    Decaf();
    virtual ~Decaf(){};

    std::string description = "Decaf";
    virtual std::string getDescription() override {return description;}
    double cost() override { return 1.05;}
};

#endif // DECAF_HPP
