#ifndef NYINGERDIENTSFACTORY_HPP
#define NYINGERDIENTSFACTORY_HPP

#include "IngredientsFactory.hpp"



class NYIngredientsFactory : public IngredientsFactory
{
public:
    NYIngredientsFactory();
    virtual Dough *      createDough()       override;
    virtual Pepperoni *  createPepperoni()   override;
    virtual Clams *      createClams()       override;
};
#endif // NYINGERDIENTSFACTORY_HPP
