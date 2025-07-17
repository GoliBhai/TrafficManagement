#include "TrafficController.h"
#include "utils.h"

TrafficController::TrafficController() : trafficDensity(0) {}

void TrafficController::setTrafficDensity() {
    std::cout << "Enter Traffic Density (1-10): ";
    std::cin >> trafficDensity;
}

void TrafficController::simulateTraffic() {
    std::cout << "Simulating Traffic...\n";
    light1.displayState();
    wait(3000); // wait for 3 seconds to simulate RED -> GREEN transition

    light1.changeState();
    light1.displayState();
    wait(3000); // wait for 3 seconds

    light1.changeState();
    light1.displayState();
    wait(3000); // wait for 3 seconds
}

void TrafficController::emergencyOverride() {
    std::cout << "Emergency Override: Switching all lights to RED!\n";
    light1.displayState();  // RED
    wait(2000);
    light2.displayState();  // RED
    wait(2000);
    light3.displayState();  // RED
    wait(2000);
}
