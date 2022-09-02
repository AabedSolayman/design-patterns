cmake_minimum_required(VERSION 3.5)

project(WeatherStation LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(WeatherStation SHARED
  WeatherStation_global.h
  WeatherStation.cpp
  WeatherStation.h
  ISubject.h
  WeatherData.cpp
  WeatherData.h
  TempretureSensor.cpp
  TempretureSensor.h
  IObserver.h
  IDisplay.h
  CurrentConditionDisplay.cpp
  CurrentConditionDisplay.h
  Sensor.h
  MeasurementsData.h
)

target_compile_definitions(WeatherStation PRIVATE OBSERVERPATTERN_LIBRARY)
