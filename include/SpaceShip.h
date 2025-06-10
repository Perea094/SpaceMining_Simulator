#ifndef SPACESHIP_H
#define SPACESHIP_H

class SpaceShip
{
private:
    float fuel;
    float cargoCapacity;
    float efficiency;

public:
    // Constructors
    SpaceShip();
    SpaceShip(float fuel, float cargoCapacity, float efficiency);
    
    // Getters
    float getFuel() const;
    float getCargoCapacity() const;
    float getEfficiency() const;

    // Setters
    void setFuel(float newFuel);
    void setCargoCapacity(float newCargoCapacity);
    void setEfficiency(float newEfficiency);    
};







#endif // SPACESHIP_H