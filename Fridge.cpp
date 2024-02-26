#include "Fridge.h"
#include <iostream>

Fridge::Fridge()
{
    if (_isLogging) std::cout << "Создан " << *this;
}

Fridge::Fridge(const std::string &color, const unsigned &weight, const std::string &vendor, const std::string &model) : _color {color}, Appliances(weight, vendor, model)
{
    if (_isLogging) std::cout << "Создан " << *this;
}

void Fridge::ShowSpecs()
{
    std::cout << *this;
}

std::string Fridge::getColor() const
{
    return this->_color;
}

void Fridge::setColor(const std::string &color)
{
    this->_color = color;
}

Fridge::~Fridge()
{
    if (_isLogging) std::cout << "Удален " << *this;
}



std::ostream &operator<<(std::ostream &output, const Fridge &fridge)
{
    output << "Холодильник, вес " << fridge._weight;
    output << ", производитель " << fridge._vendor;
    output << ", модель " << fridge._model;
    output << "\n";
    return output;
}
