#ifndef NYPIZZASTORE_HPP
#define NYPIZZASTORE_HPP
#include <memory>

#include "PizzaStore.hpp"
#include "IngredientsFactory/factories/NYIngredientsFactory.hpp"

class NYPizzaStore : public PizzaStore
{
public:
    NYPizzaStore();
    ~NYPizzaStore() override{};
    Pizza *createPizza(std::string &type) override;
private:
    std::shared_ptr<NYIngredientsFactory> newyork_ingredients_factory_;
};

#endif // NYPIZZASTORE_HPP
