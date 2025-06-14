#include <iomanip>
#include "../include/SpaceShip.h"

SpaceShip::SpaceShip() : fuel(0), cargoCapacity(0), efficiency(0), value(0) {}
SpaceShip::SpaceShip(float fuel, float cargoCapacity, float efficiency, float value)
    : fuel(fuel), cargoCapacity(cargoCapacity), efficiency(efficiency), value(value) {}

// Getters
float SpaceShip::getFuel() const {return fuel;}
float SpaceShip::getCargoCapacity() const {return cargoCapacity;}
float SpaceShip::getEfficiency() const {return efficiency;}
float SpaceShip::getValue() const {return value;}

// Methods
std::string SpaceShip::getInfo() const {
    std::string info = "SpaceShip Information:\n";
    info += "   Fuel: " + std::to_string(fuel) + " liters\n";
    info += "   Cargo Capacity: " + std::to_string(cargoCapacity) + " kg\n";
    info += "   Value: " + std::to_string(value) + " USD\n";

    return info;
}

