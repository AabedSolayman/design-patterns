#include <iostream>

#include "Pizza.hpp"

Pizza::Pizza()
{

}

void Pizza::prepare()
{
    std::cout << className
              << "::Preparing "
              <<std::endl;

}

void Pizza::bake()
{
    std::cout << className
              << "::Baking "
              <<std::endl;

}

void Pizza::cut()
{
    std::cout << className
              << "::Cutting "
              <<std::endl;

}

void Pizza::box()
{
    std::cout << className
              << "::Boxing "
              <<std::endl;
}

void Pizza::setName(std::string name){name_ = name;}

void Pizza::setDough(std::string dough){dough_ = dough;}

void Pizza::setSauce(std::string sauce){sauce_ = sauce;}

void Pizza::addToppings(std::string topping){toppings_.push_back(topping); }

std::string Pizza::getName()
{
    return name_;
}
