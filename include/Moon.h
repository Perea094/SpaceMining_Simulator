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
             float gravity, const std::vector<Resource>& resources = {})
            : SpaceBody(name, distanceFromEarth, radius, mass, resources), gravity(gravity) {}

        // Getters
        float getGravity() const;

        // Setters
        void setGravity(float g);

        // Methods 

};






#endif // MOON_H