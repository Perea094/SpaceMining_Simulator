#ifndef MOON_H
#define MOON_H

#include "SpaceBody.h"

class Moon : public SpaceBody
{
    private:
        float gravity;

    public:
        // Constructors
        Moon();
        Moon(const std::string& name, float distanceFromEarth, float radius, float mass, 
             float gravity, const std::vector<Resource>& resources = {});

        // Getters
        float getGravity() const;

        // Methods 
        std::vector<std::string> extractResources() const override; // Extracts resources from the moon
        float getComplexity() const override; // Returns the complexity of the moon based on its properties
        std::string getInfo() const override; // Returns a string with information about the moon
};






#endif // MOON_H