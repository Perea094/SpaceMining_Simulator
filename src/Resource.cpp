#include "../include/Resource.h"
#include <string>

// Constructors
Resource::Resource() : name(""), value(0), quantity(0) {}
Resource::Resource(const std::string& name, float value, float quantity)
    : name(name), value(value), quantity(quantity) {}

// Getters
std::string Resource::getName() const {return name;}
float Resource::getValue() const {return value;}
float Resource::getQuantity() const {return quantity;}

// Setters
void Resource::setName(const std::string& newName) {name = newName;}
void Resource::setValue(float newValue) {value = newValue;}
void Resource::setQuantity(float newQuantity) {quantity = newQuantity;}

// Methods
std::string Resource::getInfo() const {
    return "Resource Name: " + name + "\n" +
           "Value per kilo: " + std::to_string(value) + "\n" +
           "Quantity in kilos: " + std::to_string(quantity) + "\n";
}