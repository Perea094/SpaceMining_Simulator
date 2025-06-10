#include "../include/Asteroid.h"

#include <string>

Asteroid::Asteroid() : SpaceBody(), composition("") {}
Asteroid::Asteroid(const std::string& name, float distanceFromEarth, float radius, float mass, 
                   const std::string& composition, const std::vector<Resource>& resources)
    : SpaceBody(name, distanceFromEarth, radius, mass, resources), composition(composition) {}

// Getters
std::string Asteroid::getComposition() const {return composition;}

// Setters
void Asteroid::setComposition(const std::string& comp) {composition = comp;}

// Methods
std::vector<std::string> Asteroid::extractResources() const {
    std::vector<std::string> extractedResources;
    for (const auto& resource : resources) {
        extractedResources.push_back(resource.getName());
    }
    return extractedResources;
}


float Asteroid::getComplexity() const {
    float dFEWeight = distanceFromEarth / 100000; // Weight based on distance from Earth in 100,000 km
    float radiusWeight = radius / 1000; // Weight based on radius in km
    float massWeight = mass / 1e12; // Weight based on mass in trillions of kg
    return dFEWeight + radiusWeight + massWeight; // Total complexity score
}

std::string Asteroid::getInfo() const {
    std::string info = "Asteroid Information:\n";
    info += "Name: " + name + "\n";
    info += "Distance from Earth: " + std::to_string(distanceFromEarth) + " km\n";
    info += "Radius: " + std::to_string(radius) + " km\n";
    info += "Mass: " + std::to_string(mass) + " kg\n";
    info += "Composition: " + composition + "\n";
    info += "Complexity: " + std::to_string(getComplexity()) + "\n";
    
    if (resources.empty()) {
        info += "No resources available.\n";
    } else {
        info += "Resources:\n";
        for (const auto& resource : resources) {
            info += resource.getInfo() + "\n";
        }
    }
    info += "Total Value: " + std::to_string(getValue()) + "\n";
    return info;
}