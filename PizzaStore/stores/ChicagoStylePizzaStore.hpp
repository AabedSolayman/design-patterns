#ifndef CHICAGOSTYLEPIZZASTORE_HPP
#define CHICAGOSTYLEPIZZASTORE_HPP

#include <memory>

#include "PizzaStore.hpp"
#include "IngredientsFactory/factories/ChicagoIngredientsFactory.hpp"

class ChicagoStylePizzaStore : public PizzaStore
{
public:
    ChicagoStylePizzaStore();
    ~ChicagoStylePizzaStore() override{};

    Pizza *createPizza(std::string &type) override;
private:
    std::shared_ptr<ChicagoIngredientsFactory> chicago_ingredients_factory_;

};

#endif // CHICAGOSTYLEPIZZASTORE_HPP
