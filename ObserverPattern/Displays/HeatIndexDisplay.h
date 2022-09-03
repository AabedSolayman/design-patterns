#ifndef HEATINDEXDISPLAY_H
#define HEATINDEXDISPLAY_H

#include <string>

#include "IDisplay.h"
#include "ISubject.h"
#include "IObserver.h"

class HeatIndexDisplay : public IObserver, public IDisplay
{
public:
    HeatIndexDisplay(ISubject* weather_data_);
    ~HeatIndexDisplay();

    void update(std::map<SensorType, double> measurements) override;
    void display() override;
    std::string getDisplayName() override {return "HeatIndexDisplay";}

private:
    double computeHeatIndex(double& t, double& rh);

    ISubject* weather_data_;
    std::map<SensorType,double> measurements_;
};
#endif // HEATINDEXDISPLAY_H
