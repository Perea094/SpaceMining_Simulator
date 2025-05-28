#ifndef ASTEROID_H
#define ASTEROID_H

#include "include/SpaceBody.h"
#include <string>

class Asteroid : public SpaceBody
{
    private:
        std::string composition; // Composition of the asteroid (e.g., metal, rock, ice)
    
};

#endif // ASTEROID_H