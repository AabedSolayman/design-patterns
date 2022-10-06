cmake_minimum_required(VERSION 3.5)

project(CoffeeShopApp LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


set(Sources
    CoffeeShop.cpp)

add_executable (CoffeeShopApp CoffeeShop.cpp)

target_link_libraries (CoffeeShopApp LINK_PUBLIC CoffeeShop)


