#ifndef MISSION_H
#define MISSION_H

#include "include/SpaceShip.h"
#include "include/SpaceBody.h"
#include "include/Asteroid.h"
#include "include/Planet.h"
#include "include/Moon.h"


#include <string>

class Mission
{
    private:

        SpaceBody Target; // The target space body for the mission
        SpaceShip Ship; // The spaceship used for the mission
        float Duration; // Duration of the mission in days

    public:
        // Constructors
        Mission();
        Mission(const SpaceBody& target, const SpaceShip& ship, float duration)
            : Target(target), Ship(ship), Duration(duration) {}

        // Getters
        SpaceBody getTarget() const;
        SpaceShip getShip() const;
        float getDuration() const;

        // Setters
        void setTarget(const SpaceBody& target);
        void setShip(const SpaceShip& ship);
        void setDuration(float duration);

        // Methods
        std::string simulate() const; // Simulate the mission and return a summary

};





#endif // MISSION_H