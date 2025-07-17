#include "TrafficLight.h"
#include "utils.h"

void TrafficLight::changeState() {
    // Cycle through the states in order
    if (state == RED) {
        state = GREEN;
    } else if (state == GREEN) {
        state = YELLOW;
    } else {
        state = RED;
    }
}

void TrafficLight::displayState() const {
    std::cout << "Current Light: " << lightStateToString(state) << std::endl;
}
