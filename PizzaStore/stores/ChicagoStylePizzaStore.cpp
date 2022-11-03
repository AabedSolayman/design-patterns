#include <memory>

#include "ChicagoStylePizzaStore.hpp"
#include "pizzas/ChicagoStyleCheesePizza.hpp"

ChicagoStylePizzaStore::ChicagoStylePizzaStore()
{

}

Pizza* ChicagoStylePizzaStore::createPizza(std::string& type)
{
    std::shared_ptr<Pizza> pizza;
    if(type == "cheese")
    {
        pizza = std::make_shared<ChicagoStyleCheesePizza>();
    }
    return pizza.get();
}
