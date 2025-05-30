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
                 const std::string& composition, const std::vector<Resource>& resources = {});

        // Getters
        std::string getComposition() const;

        // Setters
        void setComposition(const std::string& comp);

        // Methods
        std::vector<std::string> extractResources() const override; // Extracts resources from the asteroid
        std::string getInfo() const override; // Returns a string with information about the asteroid

};

#endif // ASTEROID_H