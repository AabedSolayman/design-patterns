cmake_minimum_required(VERSION 3.5)

project(IngredientsFactory LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(IngredientsFactory SHARED
  factories/IngredientsFactory.cpp
  factories/IngredientsFactory.hpp
  factories/NYIngredientsFactory.cpp
  factories/NYIngredientsFactory.hpp
  factories/ChicagoIngredientsFactory.cpp
  factories/ChicagoIngredientsFactory.hpp
  ingredients/Dough.hpp
  ingredients/Pepperoni.hpp
  ingredients/Clams.hpp
)

target_compile_definitions(IngredientsFactory PUBLIC INGREDIENTSFACTORY_LIBRARY)
