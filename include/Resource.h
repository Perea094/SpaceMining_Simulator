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
    Resource(const std::string& name, float value, float quantity);

    // Getters
    std::string getName() const;
    float getValue() const;
    float getQuantity() const;

    // Setters
    void setName(const std::string& newName);
    void setValue(float newValue);
    void setQuantity(float newQuantity);

    // Methods
    std::string getInfo() const; // Returns a string with information about the resource
};


#endif // RESOURCE_H