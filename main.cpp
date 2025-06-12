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

bool acceptDecline() {
    std::cout << "Accept or Decline?\n";
    std::cout << "1. Accept\n";
    std::cout << "2. Decline\n";
    std::cout << "Please select an option (1-2): ";
    int choice;
    std::cin >> choice;
    if (choice == 1) {
        std::cout << "You accepted the mission.\n";
        return true; // Accepted
    } else if (choice == 2) {
        std::cout << "You declined the mission.\n";
        return false; // Declined
    } else {
        std::cout << "Invalid option. Please try again.\n";
        return acceptDecline(); // Recursive call for valid input
    }
}

SpaceBody* targetMenu() {
    static std::vector<Resource> marsResources = {
        Resource("Ice", 0.9, 4.585e18), 
        Resource("Iron", 1.41, 1.02e20) 
    };
    static Planet mars("Mars", 54.6e6, 3389.5, 6.4185e23, "Terrestrial", 3.72076, marsResources);
    mars + Resource("Nickel", 15.32, 8.8e21); // Adding Nickel resource to Mars

    static std::vector<Resource> phobosResources = {
        Resource("Water", 1, 1.7e14), 
        Resource("Iron", 1.41, 1.07e15),
        Resource("Nickel", 15.32, 1.07e14)
    };
    static Moon phobos("Phobos", 77.79e6, 11.267, 1.072e16, 0.0037, phobosResources);
    phobos + Resource("Carbon Compounds", 10, 2.14e15);

    static std::vector<Resource> ryuguResources = {
        Resource("Water", 1, 2.01e10), 
        Resource("Carbon Compounds", 10, 9.42e9),
        Resource("Iron", 1.41, 1.7e10),
        Resource("Nickel", 15.32, 8.56e8)
    };
    static Asteroid ryugu("Ryugu", 56203254, 0.435, 450e9, "Carbonaceous", ryuguResources);
    ryugu + Resource("Silicates", 0.05, 3.21e11);

    while (true) {
        std::cout << "Select a target type:\n";
        std::cout << "1. Planet Mars\n";
        std::cout << "2. Moon Phobos\n";
        std::cout << "3. Asteroid (162173) Ryugu\n";
        std::cout << "4. Exit\n";
        std::cout << "Please select a target (1-4): ";
        
        int choice;
        std::cin >> choice;
        
        if (choice == 4) {
            std::cout << "Exiting the target menu.\n";
            break;
        } else if (choice == 1) {
            std::cout << "You selected Planet Mars.\n";
            std::cout << mars.getInfo() << "\n";
            if (acceptDecline() == 1) {
                std::cout << "You accepted the mission to Mars.\n";
                return &mars;
            } else {
                std::cout << "You declined the mission to Mars.\n";
                continue; // Go back to target selection
            }
        } else if (choice == 2) {
            std::cout << "You selected Moon Phobos.\n";
            std::cout << phobos.getInfo() << "\n";
            if (acceptDecline() == 1) {
                std::cout << "You accepted the mission to Phobos.\n";
                return &phobos;
            } else {
                std::cout << "You declined the mission to Phobos.\n";
                continue; // Go back to target selection
            }
            
        } else if (choice == 3) {
            std::cout << "You selected Asteroid (162173) Ryugu.\n";
            std::cout << ryugu.getInfo() << "\n";
            if (acceptDecline() == 1) {
                std::cout << "You accepted the mission to Ryugu.\n";
                return &ryugu;
            } else {
                std::cout << "You declined the mission to Ryugu.\n";
                continue; // Go back to target selection
            }
        } else {
            std::cout << "Invalid option. Please try again.\n";
        }
        }
    return nullptr; // Return nullptr if no valid target is selected
}

SpaceShip spaceShipMenu() {
    SpaceShip ship1(1000.0f, 200 * 1e3, 5.0f, 50000.0f); // Example spaceship A
    SpaceShip ship2(1500.0f, 350 * 1e3, 4.5f, 75000.0f); // Example spaceship B
    SpaceShip customShip;

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
        } else if (choice == 1) {
            std::cout << "You selected SpaceShip A.\n";
            std::cout << ship1.getInfo() << "\n";
            if (acceptDecline() == 1) {
                std::cout << "You accepted the mission with SpaceShip A.\n";
                return ship1;
            } else {
                std::cout << "You declined the mission with SpaceShip A.\n";
                continue; // Go back to spaceship selection
            }
            
        } else if (choice == 2) {
            std::cout << "You selected SpaceShip B.\n";
            std::cout << ship2.getInfo() << "\n";
            if (acceptDecline() == 1) {
                std::cout << "You accepted the mission with SpaceShip B.\n";
                return ship2;
            } else {
                std::cout << "You declined the mission with SpaceShip B.\n";
                continue; // Go back to spaceship selection
            }
            
        } else if (choice == 3) {
            std::cout << "You selected Custom Ship. Please enter the details:\n";
            float fuel, cargoCapacity, efficiency, value;
            std::cout << "Enter fuel (in liters): ";
            std::cin >> fuel;
            std::cout << "Enter cargo capacity (in kg): ";
            std::cin >> cargoCapacity;
            std::cout << "Enter efficiency in (l/kg): ";
            std::cin >> efficiency;
            std::cout << "Enter value (in USD): ";
            std::cin >> value;
            customShip = SpaceShip(fuel, cargoCapacity, efficiency, value);
            std::cout << customShip.getInfo() << "\n";
            if (acceptDecline() == 1) {
                std::cout << "You accepted the mission with Custom Ship.\n";
                return customShip;
            } else {
                std::cout << "You declined the mission with Custom Ship.\n";
                continue; // Go back to spaceship selection
            }
            
        } else {
            std::cout << "Invalid option. Please try again.\n";
        }  
    }
    return ship1;
}

void missionMenu() {
    std::cout << "Starting a new mission...\n";
    Mission mission;
    SpaceBody* target = nullptr;
    SpaceShip ship;
    mission.setShip(ship);


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
            SpaceBody* selectedTarget = targetMenu();
            if (selectedTarget != nullptr) {
                mission.setTarget(*selectedTarget);
            }
        } else if (missionOption == 2) {
            mission.setShip(spaceShipMenu());
        } else if (missionOption == 3) {
            std::cout << "Set Mission Duration (in days / 30 days recomended for test case):\n";
            float duration;
            std::cin >> duration;
            mission.setDuration(duration);
        } else if (missionOption == 4) {
            std::cout << "Simulating Mission...\n";
            std::cout << mission.simulate();
            std::cout << "Mission simulation completed.\n";
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
// Basic Test case
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