#ifndef CHICAGOSTYLEPIZZASTORE_HPP
#define CHICAGOSTYLEPIZZASTORE_HPP

#include "PizzaStore.hpp"

class ChicagoStylePizzaStore : public PizzaStore
{
public:
    ChicagoStylePizzaStore();
    ~ChicagoStylePizzaStore() override{};

    Pizza *createPizza(std::string &type) override;

};

#endif // CHICAGOSTYLEPIZZASTORE_HPP
