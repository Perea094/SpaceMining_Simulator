#include "../include/Moon.h"

#include <string>

Moon::Moon() : SpaceBody(), gravity(0) {}
Moon::Moon(const std::string& name, float distanceFromEarth, float radius, float mass, 
           float gravity, const std::vector<Resource>& resources)
    : SpaceBody(name, distanceFromEarth, radius, mass, resources), gravity(gravity) {}

// Getters
float Moon::getGravity() const { return gravity; }

// Setters
void Moon::setGravity(float g) { gravity = g; }

// Methods
std::vector<std::string> Moon::extractResources() const {
    std::vector<std::string> extractedResources;
    for (const auto& resource : resources) {
        extractedResources.push_back(resource.getName());
    }
    return extractedResources;
}

float Moon::getComplexity() const {
    float dFEWeight = distanceFromEarth / 100000; // Weight based on distance from Earth in 100,000 km
    float radiusWeight = radius / 1000; // Weight based on radius in km
    float massWeight = mass / 1e18; // Weight based on mass in trillions of kg
    float gravityWeight = gravity / 2; // Weight based on gravity in m/s^2
    return dFEWeight + radiusWeight + massWeight + gravityWeight; // Total complexity score
}

std::string Moon::getInfo() const {
    std::string info = "Moon Information:\n";
    info += "   Name: " + name + "\n";
    info += "   Distance from Earth: " + std::to_string(distanceFromEarth) + " km\n";
    info += "   Radius: " + std::to_string(radius) + " km\n";
    info += "   Mass: " + std::to_string(mass) + " kg\n";
    info += "   Gravity: " + std::to_string(gravity) + " m/s^2\n";
    info += "   Complexity: " + std::to_string(getComplexity()) + "\n";

    if (resources.empty()) {
        info += "No resources available.\n";
    } else {
        info += "Resources:\n";
        for (const auto& resource : resources) {
            info += resource.getInfo() + "\n";
        }
    }
    info += "Total Value: " + std::to_string(getValue()) + " USD\n";
    return info;
}