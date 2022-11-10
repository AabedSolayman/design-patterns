#include <iostream>

#include "Pizza.hpp"



CheesePizza::CheesePizza(IngredientsFactory *ingredients_factory):
    ingredients_factory_(ingredients_factory),
    name_("Cheese Pizza")
{
}
void CheesePizza::prepare()
{
    dough_ = ingredients_factory_->createDough();
}
ClamPizza::ClamPizza(IngredientsFactory *ingredients_factory):
    ingredients_factory_(ingredients_factory),
    name_("Clam Pizza")
{

}
void ClamPizza::prepare()
{
    dough_ = ingredients_factory_->createDough();
    clams_ = ingredients_factory_->createClams();
}
