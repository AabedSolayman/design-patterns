#ifndef WEATHERDATA_H
#define WEATHERDATA_H
#include <vector>
#include <map>

#include "ISubject.h"
#include "Sensor.h"


class WeatherData : public ISubject
{

public:
    WeatherData();

    void registerObserver   (IObserver* observer) override;
    void removeObserver     (IObserver* observer) override;
    void notifyObservers    ()                    override;

    void measurementesChanged() ;
    std::map<SensorType, double> getMeasurements()      ;
    void setMeasurements(std::pair<SensorType, double> measurement)      ;
    void setMeasurements(std::map <SensorType, double> measurement)      ;


protected:

private:
    std::vector<IObserver*>     vec_observers_  ;
    std::map<SensorType,double> measurements_   ;

};


#endif // WEATHERDATA_H
