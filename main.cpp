#include "include/Mission.h"

#include <iostream>
#include <vector>

int main() {
    // Create resources
    Resource gold("Gold", 60.73 * 1000, 57000 * 1e3);
    Resource water("Water", 1.0f, 1386 * 1e15);
    
    // Create a spaceship
    SpaceShip ship(1000.0f, 200 * 1e3, 5.0f, 50000.0f);
    
    // Create a planet with resources
    Planet earth("Earth", 0, 6371.0f, 5.972e24f, "Terrestrial", 9.81f, {gold, water});
    
    // Create a mission targeting the planet with the spaceship
    Mission mission(earth, ship, 30.0f);
    
    // Simulate the mission and print the summary
    std::string summary = mission.simulate();
    std::cout << summary << std::endl;

    return 0;
}