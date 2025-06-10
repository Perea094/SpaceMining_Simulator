#include "../include/SpaceShip.h"

SpaceShip::SpaceShip() : fuel(0), cargoCapacity(0), efficiency(0) {}
SpaceShip::SpaceShip(float fuel, float cargoCapacity, float efficiency)
    : fuel(fuel), cargoCapacity(cargoCapacity), efficiency(efficiency) {}

// Getters
float SpaceShip::getFuel() const {return fuel;}
float SpaceShip::getCargoCapacity() const {return cargoCapacity;}
float SpaceShip::getEfficiency() const {return efficiency;}

// Setters
void SpaceShip::setFuel(float newFuel) {fuel = newFuel;}
void SpaceShip::setCargoCapacity(float newCargoCapacity) {cargoCapacity = newCargoCapacity;}
void SpaceShip::setEfficiency(float newEfficiency) {efficiency = newEfficiency;}

