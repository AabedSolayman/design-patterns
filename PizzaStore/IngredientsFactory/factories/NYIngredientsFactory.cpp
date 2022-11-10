#include "NYIngredientsFactory.hpp"

#include "ingredients/Dough.hpp"
#include "ingredients/Pepperoni.hpp"
#include "ingredients/Clams.hpp"

NYIngredientsFactory::NYIngredientsFactory()
{
}

Dough* NYIngredientsFactory::createDough()
{
    return new ThinCrustDough();
}

Pepperoni* NYIngredientsFactory::createPepperoni()
{
    return new SlicedPepperoni();
}

Clams* NYIngredientsFactory::createClams()
{
    return new FreshClams();
}
