cmake_minimum_required(VERSION 3.5)

project(PizzaStore LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(IngredientsFactory)
include_directories(IngredientsFactory)

add_library(PizzaStore SHARED
  pizzas/Pizza.cpp
  pizzas/Pizza.hpp
  pizzas/ChicagoStyleCheesePizza.cpp
  pizzas/ChicagoStyleCheesePizza.hpp
  pizzas/NYStyleCheesePizza.cpp
  pizzas/NYStyleCheesePizza.hpp
  stores/PizzaStore.cpp
  stores/PizzaStore.hpp
  stores/NYPizzaStore.cpp
  stores/NYPizzaStore.hpp
  stores/ChicagoStylePizzaStore.cpp
  stores/ChicagoStylePizzaStore.hpp
)

add_executable(main main.cpp)
target_link_libraries(main PizzaStore IngredientsFactory)
