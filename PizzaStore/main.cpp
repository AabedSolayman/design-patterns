#include <iostream>
#include <string>

#include "stores/NYPizzaStore.hpp"
#include "stores/ChicagoStylePizzaStore.hpp"

int main()
{

    PizzaStore *nyStore         = new NYPizzaStore();
    PizzaStore *chicagoStore    = new ChicagoStylePizzaStore();
    std::string pizza_type = "cheese";
    Pizza* pizza = nyStore->orderPizza(pizza_type);

    std::cout << "Orderd a "
              << pizza->getName()
              << std::endl;

    pizza = chicagoStore->orderPizza(pizza_type);
    std::string pizza_name = pizza->getName() ;

    std::cout << "Orderd a "
              << pizza->getName()
              << std::endl;

    delete nyStore;
    delete chicagoStore;
    delete pizza;
}
