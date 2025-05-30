#ifndef MOON_H
#define MOON_H

#include "include/SpaceBody.h"

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

        // Setters
        void setGravity(float g);

        // Methods 
        std::vector<std::string> extractResources() const override; // Extracts resources from the moon
        std::string getInfo() const override; // Returns a string with information about the moon
};






#endif // MOON_H