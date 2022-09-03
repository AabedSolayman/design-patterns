#include "HeatIndexDisplay.h"
#include <iostream>

HeatIndexDisplay::HeatIndexDisplay(ISubject *weather_data_)
{
    weather_data_->registerObserver(this);
}

HeatIndexDisplay::~HeatIndexDisplay()
{

}

void HeatIndexDisplay::update(std::map<SensorType, double> measurements)
{
    this->measurements_  = measurements;
    display();
}

void HeatIndexDisplay::display()
{
    std::cout << ":::::"<< getDisplayName() << ":::::"<<std::endl;

    try
    {
        double temperature = measurements_.at(SensorType::TEMPERATURE);
        double humidity    = measurements_.at(SensorType::HUMIDITY)   ;
        double heat_index  = computeHeatIndex(temperature, humidity)  ;

        std::cout << "Temprature Feels Like: "<< heat_index << std::endl;

    } catch (std::out_of_range)
    {
        std::cout << "Sensors are not ready!" << std::endl;
    }
    std::cout << ":::::"<< getDisplayName() << ":::::\n"<<std::endl;

}

double HeatIndexDisplay::computeHeatIndex(double& t, double& rh) {
    double index =
            ( (16.923 +
              (0.185212 * t) +
              (5.37941 * rh) -
              (0.100254 * t * rh) +
              (0.00941695 * (t * t)) +
              (0.00728898 * (rh * rh)) +
              (0.000345372 * (t * t * rh)) -
              (0.000814971 * (t * rh * rh)) +
              (0.0000102102 * (t * t * rh * rh)) -
              (0.000038646 * (t * t * t)) +
              (0.0000291583 * (rh * rh * rh)) +
              (0.00000142721 * (t * t * t * rh)) +
              (0.000000197483 * (t * rh * rh * rh)) -
              (0.0000000218429 * (t * t * t * rh * rh)) +
               0.000000000843296 * (t * t * rh * rh * rh)) -
              (0.0000000000481975 * (t * t * t * rh * rh * rh))
            );

    return index;
}
