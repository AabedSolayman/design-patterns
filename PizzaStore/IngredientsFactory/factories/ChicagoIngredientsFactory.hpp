#ifndef CHICAGOINGREDIENTSFACTORY_HPP
#define CHICAGOINGREDIENTSFACTORY_HPP

#include "IngredientsFactory.hpp"

class ChicagoIngredientsFactory : public IngredientsFactory
{
public:
    ChicagoIngredientsFactory();

    // IngredientsFactory interface
public:
    virtual Dough *     createDough() override;
    virtual Pepperoni * createPepperoni() override;
    virtual Clams *     createClams() override;
};

#endif // CHICAGOINGREDIENTSFACTORY_HPP
