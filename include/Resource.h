#ifndef RESOURCE_H
#define RESOURCE_H

#include <string>

class Resource
{
private:
    std::string name;
    float value;
    float quantity;
public:
    
    // Constructors
    Resource();
    Resource(const std::string& name, float value, float quantity)
        : name(name), value(value), quantity(quantity) {}

    // Getters
    std::string getName() const;
    float getValue() const;
    float getQuantity() const;

    // Setters
    void setName(const std::string& name);
    void setValue(float value);
    void setQuantity(float quantity);
};


#endif // RESOURCE_H