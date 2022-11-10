#ifndef INGREDIENTSFACTORY_HPP
#define INGREDIENTSFACTORY_HPP

#include "ingredients/Dough.hpp"
#include "ingredients/Pepperoni.hpp"
#include "ingredients/Clams.hpp"
class IngredientsFactory
{
public:
    virtual Dough*       createDough()       = 0;
    virtual Pepperoni*   createPepperoni()   = 0;
    virtual Clams*       createClams()       = 0;


    /**
    * @todo to be added later
    */
    //    virtual Sauce*       createSauce()       = 0;
    //    virtual Cheese*      createCheese()      = 0;


};
#endif // INGREDIENTSFACTORY_HPP
