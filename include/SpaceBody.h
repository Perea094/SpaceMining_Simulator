#ifndef SPACEBODY_H
#define SPACEBODY_H

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
              const std::vector<Resource>& resources = {});
    
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

    // Methods
    virtual std::vector<std::string> extractResources() const; // Extracts resources from the space body
    virtual std::string getInfo() const; // Returns a string with information about the space body

};


#endif // SPACEBODY_H