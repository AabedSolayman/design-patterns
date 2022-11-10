#ifndef PIZZA_HPP
#define PIZZA_HPP

#include <string>
#include <vector>
#include <iostream>

#include "IngredientsFactory/factories/IngredientsFactory.hpp"
#include "IngredientsFactory/ingredients/Dough.hpp"
#include "IngredientsFactory/ingredients/Pepperoni.hpp"
#include "IngredientsFactory/ingredients/Clams.hpp"

class Pizza
{
public:

    void bake() { std::cout << className << "::Baking " << std::endl; };
    void cut()  { std::cout << className << "::Cutting" << std::endl; };
    void box()  { std::cout << className << "::Boxing " << std::endl; };
    std::string getName() {return name_;};

    virtual void prepare() = 0;
    virtual ~Pizza(){};

protected:
    Dough*      dough_;
    Pepperoni * pepperoni_;
    Clams*      clams_;


private:
    std::string className = "Pizza";
    std::string name_ ;
};


class CheesePizza : public Pizza
{
public:
    CheesePizza(IngredientsFactory* ingredients_factory);

    virtual void prepare() override;

private:
    IngredientsFactory* ingredients_factory_;
    std::string className = "CheesePizza";
    std::string name_ ;
};

class ClamPizza : public Pizza
{
public:
    ClamPizza(IngredientsFactory* ingredients_factory);

    virtual void prepare() override;

private:
    IngredientsFactory* ingredients_factory_;
    std::string className = "ClamPizza";
    std::string name_ ;
};
#endif // PIZZA_HPP
