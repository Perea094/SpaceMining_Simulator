#ifndef ASTEROID_H
#define ASTEROID_H

#include "include/SpaceBody.h"
#include <string>

class Asteroid : public SpaceBody
{
    private:
        std::string composition; // Composition of the asteroid (e.g., metal, rock, ice)
    
    public:
        // Constructors
        Asteroid();
        Asteroid(const std::string& name, float distanceFromEarth, float radius, float mass, 
                 const std::string& composition, const std::vector<Resource>& resources = {})
            : SpaceBody(name, distanceFromEarth, radius, mass, resources), composition(composition) {}

        // Getters
        std::string getComposition() const;

        // Setters
        void setComposition(const std::string& comp);

        // Methods

};

#endif // ASTEROID_H