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

    // Setters
    void setName(const std::string& newName);
    void setDistanceFromEarth(float newDistance);
    void setRadius(float newRadius);
    void setMass(float newMass);
    void setResources(const std::vector<Resource>& newResources);

    // Methods
    void operator+ (const Resource& resource); // Adds a resource to the space body
    void operator- (const Resource& resource); // Removes a resource from the space body
    virtual std::vector<std::string> extractResources() const = 0; //
    float getValue() const; // Returns the value of the space body
    float getValue(float cargoCapacity);
    virtual float getComplexity() const = 0;
    virtual std::string getInfo() const = 0; // Returns a string with information about the space body
    


};


#endif // SPACEBODY_H