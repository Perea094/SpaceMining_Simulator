#ifndef SPACEBODY_H
#define SPACEBODY_H

#include <string>
#include "Resource.h"
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
    SpaceBody();
    SpaceBody(const std::string& name, float distanceFromEarth, float radius, float mass, 
              const std::vector<Resource>& resources = {});
    
    // Getters
    std::string getName() const;
    float getDistanceFromEarth() const;
    float getRadius() const;
    float getMass() const;
    std::vector<Resource> getResources() const;

    // Methods
    void operator+ (const Resource& resource); // Adds a resource to the space body
    float getValue() const; // Returns the value of the space body
    float getValue(float cargoCapacity);
    virtual float getComplexity() const = 0;
    virtual std::string getInfo() const = 0; // Returns a string with information about the space body
    


};


#endif // SPACEBODY_H