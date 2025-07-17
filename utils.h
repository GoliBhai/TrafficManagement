#ifndef UTILS_H
#define UTILS_H

#include <iostream>
#include <string>
#include <chrono>
#include <thread>

// Simulate delay in milliseconds (for light transition)
inline void wait(int milliseconds) {
    std::this_thread::sleep_for(std::chrono::milliseconds(milliseconds));
}

// Cross-platform screen clear
inline void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

// Convert enum state to readable string
inline std::string lightStateToString(int state) {
    switch (state) {
        case 0: return "RED";
        case 1: return "GREEN";
        case 2: return "YELLOW";
        default: return "UNKNOWN";
    }
}

#endif // UTILS_H
