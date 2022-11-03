#ifndef PIZZA_HPP
#define PIZZA_HPP

#include <string>
#include <vector>
#include <iostream>

class Pizza
{
public:
    Pizza();

    void prepare();
    void bake();
    void cut();
    void box();

    void setName(std::string  name);
    void setDough(std::string dough);
    void setSauce(std::string sauce);
    void addToppings(std::string topping);

    std::string getName();

private:
    std::string className = "Pizza";
    std::string name_ ;
    std::string dough_;
    std::string sauce_;
    std::vector<std::string> toppings_;
};

#endif // PIZZA_HPP
