
#include <memory>

#include "NYPizzaStore.hpp"
#include "pizzas/NYStyleCheesePizza.hpp"


NYPizzaStore::NYPizzaStore()
{

}

Pizza* NYPizzaStore::createPizza(std::string &type)
{
    std::shared_ptr<Pizza> pizza;
    if(type == "cheese")
    {
        pizza = std::make_shared<NYStyleCheesePizza>();
    }
    return pizza.get();
}

