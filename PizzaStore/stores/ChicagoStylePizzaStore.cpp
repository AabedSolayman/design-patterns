#include <memory>

#include "ChicagoStylePizzaStore.hpp"

#include <pizzas/Pizza.hpp>

ChicagoStylePizzaStore::ChicagoStylePizzaStore()
{
    chicago_ingredients_factory_ = std::make_shared<ChicagoIngredientsFactory>();

}

Pizza* ChicagoStylePizzaStore::createPizza(std::string& type)
{
    Pizza* pizza = nullptr;
    if(type == "cheese")
    {
        pizza = new CheesePizza(chicago_ingredients_factory_.get());
    }
    else if (type == "clam")
    {
        pizza = new ClamPizza(chicago_ingredients_factory_.get());
    }
    return pizza;
}
