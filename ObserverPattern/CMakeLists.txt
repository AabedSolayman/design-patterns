cmake_minimum_required(VERSION 3.5)

project(WeatherStation LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(IncludeFile
    WeatherStation.h
    ISubject.h
    WeatherData.h
    TempretureSensor.h
    IObserver.h
    IDisplay.h
    CurrentConditionDisplay.h
    Sensor.h
    MeasurementsData.h)

set(Sources
    WeatherStation.cpp
    WeatherData.cpp
    TempretureSensor.cpp
    CurrentConditionDisplay.cpp
    WeatherStationApp.cpp
    )

add_library(WeatherStation SHARED ${Sources})

target_compile_definitions(WeatherStation PRIVATE OBSERVERPATTERN_LIBRARY)
add_executable(WeatherStationApp WeatherStation ${Sources} ${IncludeFile})
