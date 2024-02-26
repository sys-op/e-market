#include "Mixer.h"
#include <iostream>

Mixer::Mixer()
{
    if (Device::_isLogging) std::cout << "Создан " << *this;
}

Mixer::Mixer(const unsigned &power, const unsigned &batteryLife, const unsigned &weight, const std::string &vendor, const std::string &model) : _power {power}, Device(batteryLife, vendor, model), Appliances(weight, vendor, model)
{
    if (Device::_isLogging) std::cout << "Создан " << *this;
}

void Mixer::ShowSpecs()
{
    std::cout << *this;
}

std::string Mixer::getVendor()
{
    return this->Device::_vendor;
}

void Mixer::setVendor(const std::string &vendor)
{
    this->Device::_vendor = vendor;
}

std::string Mixer::getModel()
{
    return this->Device::_model;
}

void Mixer::setModel(const std::string &model)
{
    this->Device::_model = model;
}

Mixer::~Mixer()
{
    if (Device::_isLogging) std::cout << "Удален " << *this;
}

unsigned Mixer::getPower() const
{
    return this->_power;
}

void Mixer::setPower(const unsigned &power)
{
    this->_power = power;
}

std::ostream &operator<<(std::ostream &output, const Mixer &mixer)
{
    output << "Аккумуляторный миксер, время работы аккумулятора " << mixer._batteryLife;
    output << ", вес " << mixer._weight;
    output << ", производитель " << mixer.Device::_vendor;
    output << ", модель " << mixer.Device::_model;
    output << ", мощность " << mixer._power;
    output << "\n";
    return output;
}
