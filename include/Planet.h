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
           const std::string& planetType, float gravity, const std::vector<Resource>& resources = {})
        : SpaceBody(name, distanceFromEarth, radius, mass, resources), 
          planetType(planetType), gravity(gravity) {}

    // Getters
    std::string getPlanetType() const;
    float getGravity() const;

    // Setters
    void setPlanetType(const std::string& type);
    void setGravity(float g);

    // Methods
};



#endif // PLANET_H