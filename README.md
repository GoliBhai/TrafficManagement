# Traffic Management System (C++)

This is a simple console-based Traffic Management System developed in C++. The program simulates traffic light operations at an intersection, allowing users to set traffic density, simulate traffic light changes, and trigger emergency overrides.

## Features

- Interactive command-line menu to control the system
- Traffic lights cycle through RED, GREEN, and YELLOW states
- Traffic density can be set to influence simulation behavior
- Emergency override mode that switches all traffic lights to RED
- Realistic delay between light changes to mimic real traffic signals
- Cross-platform screen clearing for a clean user interface

## How It Works

The system consists of:

- **TrafficLight** class: Represents a traffic light and its state transitions.
- **TrafficController** class: Manages multiple traffic lights and controls traffic flow based on user input.
- **Utility functions**: Helpers for delay simulation and screen clearing.

Users interact via a simple menu to set traffic density, simulate traffic, or activate emergency overrides.

## Getting Started

### Prerequisites

- A C++ compiler such as g++ or Visual Studio.
- Basic knowledge of using the command line.

### Compilation

To compile the project using g++:

```bash
g++ main.cpp TrafficLight.cpp TrafficController.cpp -o TrafficManagement



Running the Program

Run the executable:

./TrafficManagement

Follow the on-screen menu to interact with the traffic management system.

Example Output

=== Traffic Management System ===
1. Set Traffic Density
2. Simulate Traffic
3. Emergency Override
0. Exit
Choose: 2

Simulating Traffic...
Current Light: RED
Current Light: GREEN
Current Light: YELLOW


Skills Demonstrated

    Object-Oriented Programming in C++

    Modular programming with header and source files

    Command-line interface design

    Use of standard C++ libraries for timing and system control

    Cross-platform compatibility considerations

