#include "Device.h"
#include <iostream>

Device::Device()
{
    if (_isLogging) std::cout << "Создано " << *this;
}

Device::Device(const unsigned &batteryLife, const std::string &vendor, const std::string &model) : _batteryLife {batteryLife}, _vendor {vendor}, _model {model}
{
    if (_isLogging) std::cout << "Создано " << *this;
}

void Device::ShowSpecs()
{
    std::cout << *this;
}

std::string Device::getVendor()
{
    return this->_vendor;
}

void Device::setVendor(const std::string &vendor)
{
    this->_vendor = vendor;
}

std::string Device::getModel()
{
    return this->_model;
}

void Device::setModel(const std::string &model)
{
    this->_model = model;
}

Device::~Device()
{
    if (_isLogging) std::cout << "Удалено " << *this;
}

unsigned Device::getBatteryLife() const
{
    return this->_batteryLife;
}

void Device::setBatteryLife(const unsigned &batteryLife)
{
    this->_batteryLife = batteryLife;
}

std::ostream &operator<<(std::ostream &output, const Device &device)
{
    output << "Устройство, время работы аккумулятора " << device._batteryLife;
    output << ", производитель " << device._vendor;
    output << ", модель " << device._model;
    output << "\n";
    return output;
}
