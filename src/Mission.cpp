#include "../include/Mission.h"

#include <string>

Mission::Mission() : Target(nullptr), duration(0) {}
Mission::Mission(const SpaceBody& target, const SpaceShip& ship, float duration)
    : Target(const_cast<SpaceBody*>(&target)), Ship(ship), duration(duration) {}

// Getters
SpaceBody* Mission::getTarget() const {return Target;}
SpaceShip Mission::getShip() const {return Ship;}
float Mission::getDuration() const {return duration;}

// Setters
void Mission::setTarget(const SpaceBody& target) {
    Target = const_cast<SpaceBody*>(&target);
}
void Mission::setShip(const SpaceShip& ship) {Ship = ship;}
void Mission::setDuration(float newDuration) {duration = newDuration;}

// Methods
std::string Mission::simulate() const {
    std::string summary = "========== Mission Summary ==========\n";
    if (Target == nullptr) {
        summary += "No target space body set for the mission.\n";
    }
    else {
        summary += Target->getInfo(); // Ensure the target is valid and has resources
    }
    summary += "\n" + Ship.getInfo() + "\n";
    
    summary += "Mission Duration: " + std::to_string(duration) + " days\n";
    
    // Simulate resource extraction
    float profit = -Ship.getValue() - (Ship.getFuel() * 10) - (duration * Target->getComplexity());
    profit += Target->getValue(Ship.getCargoCapacity());
    summary += "Profit from extraction: " + std::to_string(Target->getValue(Ship.getCargoCapacity())) + " USD\n";
    summary += "Overal Costs: " + std::to_string(Ship.getValue() + (Ship.getFuel() * 10) + (duration * Target->getComplexity())) + " USD\n";
    summary += "NET Estimated Profit: " + std::to_string(profit) + " USD\n";
    return summary;
}