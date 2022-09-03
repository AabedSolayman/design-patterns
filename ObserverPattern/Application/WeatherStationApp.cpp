#include "WeatherStation.h"
#include "Sensors/TempretureSensor.h"
#include "Sensors/HumiditySensor.h"

#include "Displays/CurrentConditionDisplay.h"

int main()
{
    WeatherStation      * weather_staiton = new WeatherStation();

    TempretureSensor    * temp_sensor = new TempretureSensor();

    HumiditySensor      * humid_sensor = new HumiditySensor();

    weather_staiton->addSensor(temp_sensor);

    weather_staiton->addSensor(humid_sensor);

    weather_staiton->updateSensorsMeasurements();

    delete weather_staiton;

}
