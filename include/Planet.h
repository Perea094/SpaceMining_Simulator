#ifndef PLANET_H
#define PLANET_H

#include "include/SpaceBody.h"
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

    // Setters
    void setPlanetType(const std::string& type);
    void setGravity(float g);

    // Methods
    std::vector<std::string> extractResources() const override; // Extracts resources from the planet
    std::string getInfo() const override; // Returns a string with information about the planet
};



#endif // PLANET_H