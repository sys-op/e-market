#include "Appliances.h"
#include <iostream>

Appliances::Appliances()
{
    if (_isLogging) std::cout << "Создана " << *this;
}

Appliances::Appliances(const unsigned &weight, const std::string &vendor, const std::string &model) : _weight{weight}, _vendor {vendor}, _model {model}
{
    if (_isLogging) std::cout << "Создана " << *this;
}

void Appliances::ShowSpecs()
{
    std::cout << *this;
}

std::string Appliances::getVendor()
{
    return this->_vendor;
}

void Appliances::setVendor(const std::string &vendor)
{
    this->_vendor = vendor;
}

std::string Appliances::getModel()
{
    return this->_model;
}

void Appliances::setModel(const std::string &model)
{
    this->_model = model;
}

Appliances::~Appliances()
{
    if (_isLogging) std::cout << "Удалена " << *this;
}

unsigned Appliances::getWeight() const
{
    return this->_weight;
}

void Appliances::setWeight(const unsigned &weight)
{
    this->_weight = weight;
}

std::ostream &operator<<(std::ostream &output, const Appliances &appliances)
{
    output << "Бытовая техника,  вес " << appliances._weight;
    output << ", производитель " << appliances._vendor;
    output << ", модель " << appliances._model;
    output << "\n";
    return output;
}
