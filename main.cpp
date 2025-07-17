#include "TrafficController.h"
#include "utils.h"
#include <iostream>

int main() {
    TrafficController controller;
    int choice;

    do {
        clearScreen(); // clears the screen for a cleaner UI
        std::cout << "=== Traffic Management System ===\n";
        std::cout << "1. Set Traffic Density\n";
        std::cout << "2. Simulate Traffic\n";
        std::cout << "3. Emergency Override\n";
        std::cout << "0. Exit\n";
        std::cout << "Choose: ";
        std::cin >> choice;

        clearScreen(); // clear after input for readability

        switch (choice) {
            case 1:
                controller.setTrafficDensity();
                break;
            case 2:
                controller.simulateTraffic();
                wait(2000); // add delay after simulation
                break;
            case 3:
                controller.emergencyOverride();
                wait(2000); // pause to show RED lights
                break;
            case 0:
                std::cout << "Exiting system...\n";
                break;
            default:
                std::cout << "Invalid option. Try again.\n";
        }

        wait(1000); // pause between menu refreshes
    } while (choice != 0);

    return 0;
}
