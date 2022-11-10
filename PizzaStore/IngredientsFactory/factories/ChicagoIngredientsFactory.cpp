#include "ChicagoIngredientsFactory.hpp"

#include "ingredients/Dough.hpp"
#include "ingredients/Pepperoni.hpp"
#include "ingredients/Clams.hpp"

#include <iostream>
ChicagoIngredientsFactory::ChicagoIngredientsFactory()
{

}


Dough* ChicagoIngredientsFactory::createDough()
{
    return new ThickCrustDough();
}


Pepperoni* ChicagoIngredientsFactory::createPepperoni()
{
    return new SlicedPepperoni();
}

Clams* ChicagoIngredientsFactory::createClams()
{
    return new FrozenClams();
}
