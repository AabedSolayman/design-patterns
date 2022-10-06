cmake_minimum_required(VERSION 3.5)

project(CoffeeShop LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


set(Sources
    Coffees/Beverage.cpp
    Coffees/HouseBlend.cpp
    Coffees/Espresso.cpp
    Coffees/DarkRoast.cpp
    Coffees/Decaf.cpp
    Condiments/Mocha.cpp
    Condiments/SteamedMilk.cpp
    Condiments/Whip.cpp
    Condiments/Soy.cpp
    Condiments/CondimentDecorator.cpp
    )
set (IncludeFiles
    Coffees/Beverage.hpp
    Coffees/Espresso.hpp
    Coffees/HouseBlend.hpp
    Coffees/DarkRoast.hpp
    Coffees/Decaf.hpp
    Condiments/CondimentDecorator.hpp
    Condiments/Mocha.hpp
    Condiments/SteamedMilk.hpp
    Condiments/Whip.hpp
    Condiments/Soy.hpp

    )

add_library(CoffeeShop SHARED ${Sources})

target_include_directories (CoffeeShop PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})


