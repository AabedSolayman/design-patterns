#include <iostream>

#include "Coffees/Beverage.hpp"
#include "Coffees/Espresso.hpp"
#include "Coffees/DarkRoast.hpp"
#include "Coffees/Decaf.hpp"
#include "Coffees/Beverage.hpp"

#include "Condiments/CondimentDecorator.hpp"
#include "Condiments/Mocha.hpp"
#include "Condiments/Soy.hpp"
#include "Condiments/Whip.hpp"

int main()
{
    Beverage * espresso = new Espresso();
    std::cout
            << "Beverage: "
            << espresso->getDescription()
            << " Cost: "
            << espresso->cost()
            << std::endl;

    Beverage * frappicino = new DarkRoast();
    frappicino = new Mocha(frappicino);
    frappicino = new Mocha(frappicino);
    frappicino = new Whip(frappicino);

    std::cout
            << "Beverage: "
            << frappicino->getDescription()
            << " Cost: "
            << frappicino->cost()
            << std::endl;


    Beverage * soyMochaWhip = new DarkRoast();
    soyMochaWhip = new Soy(frappicino);
    soyMochaWhip = new Mocha(frappicino);
    soyMochaWhip = new Whip(frappicino);

    std::cout
            << "Beverage: "
            << soyMochaWhip->getDescription()
            << " Cost: "
            << soyMochaWhip->cost()
            << std::endl;

     delete soyMochaWhip;
     delete frappicino;
     delete espresso;
}
