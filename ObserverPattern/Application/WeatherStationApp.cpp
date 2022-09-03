#include "WeatherStation.h"
#include "Sensors/TempretureSensor.h"
#include "Displays/CurrentConditionDisplay.h"

int main()
{
    WeatherStation* weather_staiton = new WeatherStation();

    TempretureSensor* temp_sensor = new TempretureSensor();
    weather_staiton->addSensor(temp_sensor);

    weather_staiton->updateSensorsMeasurements();

    delete weather_staiton;

}
