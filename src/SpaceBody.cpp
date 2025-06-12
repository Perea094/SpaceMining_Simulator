#include "../include/SpaceBody.h"
#include <string>
#include <vector>
#include <algorithm>

SpaceBody::SpaceBody()
    : name(""), distanceFromEarth(0), radius(0), mass(0), resources() {}

SpaceBody::SpaceBody(const std::string& name, float distanceFromEarth, float radius, float mass, 
                     const std::vector<Resource>& resources)
    : name(name), distanceFromEarth(distanceFromEarth), radius(radius), mass(mass), resources(resources) {}

// Getters
std::string SpaceBody::getName() const {return name;}
float SpaceBody::getDistanceFromEarth() const {return distanceFromEarth;}
float SpaceBody::getRadius() const {return radius;}
float SpaceBody::getMass() const {return mass;}
std::vector<Resource> SpaceBody::getResources() const {return resources;}

// Methods
std::vector<std::string> SpaceBody::extractResources() const {
    std::vector<std::string> extractedResources;
    for (const auto& resource : resources) {
        extractedResources.push_back(resource.getName());
    }
    return extractedResources;
}

float SpaceBody::getValue() const {
    float totalValue = 0;
    if (resources.empty())
    {
        return totalValue; // No resources, value is zero
    }
    else
    {
        for (const auto& resource : resources) {
            totalValue += resource.getValue() * resource.getQuantity();
        }
    }
    return totalValue;
}

float SpaceBody::getValue(float cargoCapacity) {
    float totalValue = 0;
    if (resources.empty()) {
        return totalValue; // No resources, value is zero
    } else {
        for (auto& resource : resources) {
            totalValue += resource.getValue() * cargoCapacity;
            resource.setQuantity(resource.getQuantity() - cargoCapacity);
        }
    }
    return totalValue;
}

float SpaceBody::getComplexity() const {
    float dFEWeight = distanceFromEarth / 100000; // Weight based on distance from Earth in 100,000 km
    float radiusWeight = radius / 1000; // Weight based on radius in km
    float massWeight = mass / 1e18; // Weight based on mass in trillions of kg
    return dFEWeight + radiusWeight + massWeight; // Total complexity score
}


std::string SpaceBody::getInfo() const {
    std::string info = "Space Body Information:\n";
    info += "Name: " + name + "\n";
    info += "Distance from Earth: " + std::to_string(distanceFromEarth) + " km\n";
    info += "Radius: " + std::to_string(radius) + " km\n";
    info += "Mass: " + std::to_string(mass) + " kg\n";
    info += "Complexity: " + std::to_string(getComplexity()) + "\n";
    if (resources.empty()) {
        info += "No resources available.\n";
    } else
    {
        info += "Resources:\n";
    for (const auto& resource : resources) {
        info += resource.getInfo() + "\n";
    }
    }
    info += "Total Value: " + std::to_string(getValue()) + " USD\n";
    return info;
}

void SpaceBody::operator+ (const Resource& resource) {
    resources.push_back(resource);
}
