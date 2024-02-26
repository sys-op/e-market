#include "Radioset.h"
#include <iostream>

Radioset::Radioset()
{
    if (Device::_isLogging) std::cout << "Создан " << *this;
}

Radioset::Radioset(const unsigned &wave, const unsigned &batteryLife, const unsigned &weight, const std::string &vendor, const std::string &model) : _wave {wave}, Device(batteryLife, vendor, model), Appliances(weight, vendor, model)
{
    if (Device::_isLogging) std::cout << "Создан " << *this;
}

void Radioset::ShowSpecs()
{
    std::cout << *this;
}

std::string Radioset::getVendor()
{
    return this->Device::_vendor;
}

void Radioset::setVendor(const std::string &vendor)
{
    this->Device::_vendor = vendor;
}

std::string Radioset::getModel()
{
    return this->Device::_model;
}

void Radioset::setModel(const std::string &model)
{
    this->Device::_model = model;
}

Radioset::~Radioset()
{
    if (Device::_isLogging) std::cout << "Удален " << *this;
}

unsigned Radioset::getWave()
{
    return this->_wave;
}

void Radioset::setWave(const unsigned &wave)
{
    this->_wave = wave;
}

std::ostream &operator<<(std::ostream &output, const Radioset &radioset)
{
    output << "Аккумуляторный радиоприёмник, время работы аккумулятора " << radioset._batteryLife;
    output << ", вес " << radioset._weight;
    output << ", производитель " << radioset.Device::_vendor;
    output << ", модель " << radioset.Device::_model;
    output << ", радиоволна " << radioset._wave;
    output << "\n";
    return output;
}
