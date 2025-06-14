#ifndef ASTEROID_H
#define ASTEROID_H

#include "SpaceBody.h"
#include <string>

class Asteroid : public SpaceBody
{
    private:
        std::string composition; // Composition of the asteroid (e.g., metal, rock, ice)
    
    public:
        // Constructors
        Asteroid();
        Asteroid(const std::string& name, float distanceFromEarth, float radius, float mass, 
                 const std::string& composition, const std::vector<Resource>& resources = {});

        // Getters
        std::string getComposition() const;

        // Methods
        float getComplexity() const override; // Returns the complexity of the asteroid based on its properties
        std::string getInfo() const override; // Returns a string with information about the asteroid

};

#endif // ASTEROID_H