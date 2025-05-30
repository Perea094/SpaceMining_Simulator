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
    void setFuel(float fuel);
    void setCargoCapacity(float cargoCapacity);
    void setEfficiency(float efficiency);

    
};







#endif // SPACESHIP_H