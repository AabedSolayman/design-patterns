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

std::string Pizza::getName()
{
    return name;
}
