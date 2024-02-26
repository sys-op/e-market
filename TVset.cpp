#include "TVset.h"
#include <iostream>

TVset::TVset()
{
    if (_isLogging) std::cout << "Создан " << *this;
}

TVset::TVset(const displayResolution_t &displayResolution, const unsigned &weight, const std::string &vendor, const std::string &model) : _displayResolution {displayResolution}, Appliances(weight, vendor, model)
{
    if (_isLogging) std::cout << "Создан " << *this;
}

void TVset::ShowSpecs()
{
    std::cout << *this;
}

TVset::~TVset()
{
    if (_isLogging) std::cout << "Удален " << *this;
}

displayResolution_t TVset::getDisplayResolution() const
{
    return this->_displayResolution;
}

void TVset::setDisplayResolution(const displayResolution_t &displayResolution)
{
    this->_displayResolution = displayResolution;
}

std::ostream &operator<<(std::ostream &output, const TVset &TVset)
{
    output << "Телевизор, вес " << TVset._weight;
    output << ", производитель " << TVset._vendor;
    output << ", модель " << TVset._model;
    output << ", разрешение экрана " << TVset._displayResolution;
    output << "\n";
    return output;
}
