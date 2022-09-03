cmake_minimum_required(VERSION 3.5)

project(WeatherStation LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(IncludeFiles
    WeatherStation.h
    ISubject.h
    WeatherData.h
    IObserver.h
    Displays/IDisplay.h
    Displays/CurrentConditionDisplay.h
    Displays/HeatIndexDisplay.h
    Sensors/Sensor.h
    Sensors/TempretureSensor.h
    Sensors/HumiditySensor.h
    )

set(Sources
    WeatherStation.cpp
    WeatherData.cpp
    Sensors/TempretureSensor.cpp
    Displays/CurrentConditionDisplay.cpp
    Displays/HeatIndexDisplay.cpp
    Sensors/HumiditySensor.cpp
    )

add_library(WeatherStation SHARED ${Sources})

target_compile_definitions(WeatherStation PRIVATE OBSERVERPATTERN_LIBRARY)


set(ApplicationSources
    Application/WeatherStationApp.cpp)

add_executable( WeatherStationApp
                WeatherStation
                ${ApplicationSources}
                ${Sources}
                ${IncludeFiles})
