
#include <memory>

#include "NYPizzaStore.hpp"
#include "pizzas/Pizza.hpp"

NYPizzaStore::NYPizzaStore()
{
    newyork_ingredients_factory_ = std::make_shared<NYIngredientsFactory>();
}

Pizza* NYPizzaStore::createPizza(std::string &type)
{

    Pizza* pizza = nullptr;
    if(type == "cheese")
    {
        pizza = new CheesePizza(newyork_ingredients_factory_.get());
    }
    else if (type == "clam")
    {
        pizza = new ClamPizza(newyork_ingredients_factory_.get());
    }
    return pizza;
}

