#include "../include/Planet.h"

#include <string>

Planet::Planet() : SpaceBody(), planetType(""), gravity(0) {}
Planet::Planet(const std::string& name, float distanceFromEarth, float radius, float mass, 
               const std::string& planetType, float gravity, const std::vector<Resource>& resources)
    : SpaceBody(name, distanceFromEarth, radius, mass, resources), planetType(planetType), gravity(gravity) {}

// Getters
std::string Planet::getPlanetType() const { return planetType; }
float Planet::getGravity() const { return gravity; }

// Methods
std::vector<std::string> Planet::extractResources() const {
    std::vector<std::string> extractedResources;
    for (const auto& resource : resources) {
        extractedResources.push_back(resource.getName());
    }
    return extractedResources;
}

float Planet::getComplexity() const {
    float dFEWeight = distanceFromEarth / 100000; // Weight based on distance from Earth in 100,000 km
    float radiusWeight = radius / 1000; // Weight based on radius in km
    float massWeight = mass / 1e18; // Weight based on mass in trillions of kg
    float gravityWeight = gravity / 2; // Weight based on gravity in m/s^2
    return dFEWeight + radiusWeight + massWeight + gravityWeight; // Total complexity score
}



std::string Planet::getInfo() const {
    std::string info = "Planet Information:\n";
    info += "   Name: " + name + "\n";
    info += "   Distance from Earth: " + std::to_string(distanceFromEarth) + " km\n";
    info += "   Radius: " + std::to_string(radius) + " km\n";
    info += "   Mass: " + std::to_string(mass) + " kg\n";
    info += "   Type: " + planetType + "\n";
    info += "   Gravity: " + std::to_string(gravity) + " m/s^2\n";
    info += "   Complexity: " + std::to_string(getComplexity()) + "\n\n";

    if (resources.empty()) {
        info += "No resources available.\n";
    } else {
        info += "Resources:\n";
        for (const auto& resource : resources) {
            info += resource.getInfo() ;
        }
    }
    info += "Total Value: " + std::to_string(getValue()) + " USD\n";
    return info;
}