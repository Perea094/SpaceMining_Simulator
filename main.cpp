#include "include/Mission.h"

#include <iostream>
#include <vector>




void printHeader() {
    std::cout << "==================== Space Exploration Mission ====================\n";
    std::cout << "This program simulates a space mission targeting a space body with resources.\n";
    std::cout << "===================================================================\n\n";
    std::cout << "Welcome to the Space Exploration Mission Simulator!\n";
    std::cout << "Press Enter to continue...\n";
    std::cin.get(); // Wait for user input
}



void targetMenu() {
    while (true) {
        std::cout << "Select a target type:\n";
        std::cout << "1. Planet\n";
        std::cout << "2. Moon\n";
        std::cout << "3. Asteroid\n";
        std::cout << "4. Exit\n";
        std::cout << "Please select a target type (1-4): ";
        
        int choice;
        std::cin >> choice;
        
        if (choice == 4) {
            std::cout << "Exiting the target menu.\n";
            break;
        } else if (choice < 1 || choice > 4) {
            std::cout << "Invalid option. Please try again.\n";
            continue;
        }  
    }
}

void spaceShipMenu() {
    while (true) {
        std::cout << "Select a spaceship type:\n";
        std::cout << "1. SpaceShip A\n";
        std::cout << "2. SpaceShip B\n";
        std::cout << "3. Custom\n";
        std::cout << "4. Exit\n";
        std::cout << "Please select a spaceship type (1-4): ";
        
        int choice;
        std::cin >> choice;
        
        if (choice == 4) {
            std::cout << "Exiting the spaceship menu.\n";
            break;
        } else if (choice < 1 || choice > 3) {
            std::cout << "Invalid option. Please try again.\n";
            continue;
        }  
    }
}

void missionMenu() {
    std::cout << "Starting a new mission...\n";
    while (true)
    {
        std::cout << "Select an option:\n";
        std::cout << "1. Select Target\n";
        std::cout << "2. Select Space Ship\n";
        std::cout << "3. Set Mission Duration\n";
        std::cout << "4. Simulate Mission\n";
        std::cout << "5. Exit\n";
        int missionOption;
        std::cin >> missionOption;
        if (missionOption == 5) {
            std::cout << "Exiting the mission setup.\n";
            break;
        } else if (missionOption == 1) {
            targetMenu();
        } else if (missionOption == 2) {
            spaceShipMenu();
        } else if (missionOption == 3) {
            std::cout << "Set Mission Duration (in days):\n";
            // Here you would normally set the duration
        } else if (missionOption == 4) {
            std::cout << "Simulating Mission...\n";
            // Here you would normally simulate the mission
        }
        else {
            std::cout << "Invalid option. Please try again.\n";
            continue;
        }
    }
}

int main() {

    
    int option;
    printHeader();

    while (true) {
        std::cout << "Choose an option:\n";
        std::cout << "1. Start a new mission\n";
        std::cout << "2. Exit\n";
        std::cin >> option;
        if (option == 2) {
            std::cout << "Exiting the simulator. Goodbye!\n";
            break;
        } else if (option == 1) {
            missionMenu();
            continue;
        }
        else {
            std::cout << "Invalid option. Please try again.\n";
            continue;
        }
    }

    return 0;
}




/*
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
*/