#ifndef PIZZASTORE_HPP
#define PIZZASTORE_HPP

#include <string>

#include "Pizza.hpp"

class  PizzaStore
{
public:
    PizzaStore();
    Pizza orderPizza(std::string type);
protected:
    /**
      * @brief Factory method responsible for instantiating pizzas.
      * @return Pizza depending on the type
    */
    virtual Pizza createPizza(std::string type) = 0;
};

#endif // PIZZASTORE_HPP
