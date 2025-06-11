#ifndef SPACESHIP_H
#define SPACESHIP_H

#include <string>

class SpaceShip
{
private:
    float fuel;
    float cargoCapacity; //in kg
    float efficiency;
    float value;

public:
    // Constructors
    SpaceShip();
    SpaceShip(float fuel, float cargoCapacity, float efficiency, float value);
    
    // Getters
    float getFuel() const;
    float getCargoCapacity() const;
    float getEfficiency() const;
    float getValue() const;

    // Methods
    std::string getInfo() const; // Returns a string with information about the spaceship
    
};







#endif // SPACESHIP_H