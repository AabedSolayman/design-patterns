cmake_minimum_required(VERSION 3.5)

project(PizzaStore LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(PizzaStore SHARED
  PizzaStore_global.hpp
  PizzaStore.cpp
  PizzaStore.hpp
  Pizza.cpp
  Pizza.hpp
)

target_compile_definitions(PizzaStore PRIVATE PIZZASTORE_LIBRARY)
