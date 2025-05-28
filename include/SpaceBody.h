#ifndef SPACESHIP_H
#define SPACESHIP_H

#include <string>
#include "include/Resource.h"
#include <vector>

class SpaceBody
{
protected:
    std::string name;
    float distanceFromEarth; // in kilometers
    float radius; // in kilometers
    float mass; // in kilograms
    std::vector<Resource> resources; // Resources available on the space body

public:
    // Constructors
    SpaceBody(/* args */);
    SpaceBody(const std::string& name, float distanceFromEarth, float radius, float mass, 
              const std::vector<Resource>& resources = {})
        : name(name), distanceFromEarth(distanceFromEarth), radius(radius), mass(mass) , resources(resources){}
    
    // Getters
    std::string getName() const;
    float getDistanceFromEarth() const;
    float getRadius() const;
    float getMass() const;
    std::vector<Resource> getResources() const;

    // Setters
    void setName(const std::string& name);
    void setDistanceFromEarth(float distance);
    void setRadius(float radius);
    void setMass(float mass);
    void setResources(const std::vector<Resource>& resources);
};


#endif // SPACESHIP_H