#ifndef PLANET_H
#define PLANET_H

#include "SpaceBody.h"
#include <string>


class Planet : public SpaceBody
{
private:
    std::string planetType; // Type of planet (e.g., terrestrial, gas giant, ice giant)
    float gravity; // Surface gravity of the planet in m/s^2


public:
    // Constructors
    Planet();
    Planet(const std::string& name, float distanceFromEarth, float radius, float mass, 
           const std::string& planetType, float gravity, const std::vector<Resource>& resources = {});

    // Getters
    std::string getPlanetType() const;
    float getGravity() const;

    // Methods
    float getComplexity() const override; // Returns the complexity of the planet based on its properties
    std::string getInfo() const override; // Returns a string with information about the planet
};



#endif // PLANET_H