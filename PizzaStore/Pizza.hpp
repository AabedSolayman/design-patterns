#ifndef PIZZA_HPP
#define PIZZA_HPP

#include <string>
#include <vector>

class Pizza
{
public:
    Pizza();
    void prepare();
    void bake();
    void cut();
    void box();
    std::string getName();
private:
    std::string className = "Pizza";
    std::string name;
    std::string dough;
    std::string sauce;
    std::vector<std::string> toppings;
};

#endif // PIZZA_HPP
