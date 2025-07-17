#ifndef TRAFFICCONTROLLER_H
#define TRAFFICCONTROLLER_H

#include "TrafficLight.h"

class TrafficController {
public:
    TrafficController();
    void setTrafficDensity();
    void simulateTraffic();
    void emergencyOverride();

private:
    TrafficLight light1, light2, light3;
    int trafficDensity;
};

#endif // TRAFFICCONTROLLER_H
