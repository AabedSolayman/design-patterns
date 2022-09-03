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
    virtual ~WeatherData();

    void registerObserver   (IObserver* observer) override;
    void removeObserver     (IObserver* observer) override;
    void notifyObservers    ()                    override;

    void measurementesChanged() ;

    void setMeasurements(SensorType type, double measurement)           ;
    void setMeasurements(std::map <SensorType, double> measurements)    ;
    std::map<SensorType, double> getMeasurements()                      ;


protected:

private:
    std::vector<IObserver*>     vec_observers_  ;
    std::map<SensorType,double> measurements_   ;

};


#endif // WEATHERDATA_H
