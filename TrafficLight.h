#ifndef TRAFFICLIGHT_H
#define TRAFFICLIGHT_H

#include <iostream>

class TrafficLight {
public:
    enum State { RED, GREEN, YELLOW };
    
    TrafficLight() : state(RED) {}  // Initial state is RED

    void changeState() {
        // Cycle through the states in order
        if (state == RED) {
            state = GREEN;
        } else if (state == GREEN) {
            state = YELLOW;
        } else {
            state = RED;
        }
    }

    void displayState() const {
        std::cout << "Current Light: " << lightStateToString(state) << std::endl;
    }

private:
    State state;
};

#endif // TRAFFICLIGHT_H
