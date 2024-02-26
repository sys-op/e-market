#include "Smartphone.h"
#include <iostream>

Smartphone::Smartphone()
{
    if (_isLogging) std::cout << "Создан " << *this;
}

Smartphone::Smartphone(const displayResolution_t &displayResolution, const std::string &color, const std::string &os, const unsigned &batteryLife, const std::string &vendor, const std::string &model) : _displayResolution {displayResolution}, _color {color}, _os {os}, Device(batteryLife, vendor, model)
{
    if (_isLogging) std::cout << "Создан " << *this;
}

void Smartphone::ShowSpecs()
{
    std::cout << *this;
}

void Smartphone::ShowDisplayResolution()
{
    std::cout << "Разрешение экрана смартфона " << this->getDisplayResolution() << "\n";
}

void Smartphone::ShowColor()
{
    std::cout << "Цвет смартфона " << this->_color << "\n";
}

void Smartphone::ShowOS()
{
    std::cout << "ОС смартфона " << this->_color << "\n";
}

Smartphone::~Smartphone()
{
    if (_isLogging) std::cout << "Удален " << *this;
}

displayResolution_t Smartphone::getDisplayResolution() const
{
    return this->_displayResolution;
}

std::string Smartphone::getColor() const
{
    return this->_color;
}

std::string Smartphone::getOs() const
{
    return this->_os;
}

void Smartphone::setDisplayResolution(const displayResolution_t &displayResolution)
{
    this->_displayResolution.x = displayResolution.x;
    this->_displayResolution.y = displayResolution.y;
}

void Smartphone::setColor(const std::string &color)
{
    this->_color = color;
}

void Smartphone::setOs(const std::string &os)
{
    this->_os = os;
}

std::ostream &operator<<(std::ostream &output, const Smartphone &smartphone)
{
    output << "Смартфон, время работы аккумулятора " << smartphone._batteryLife;
    output << ", производитель " << smartphone._vendor;
    output << ", модель " << smartphone._model;
    output << ", разрешение экрана " << smartphone._displayResolution;
    output << ". цвет " << smartphone._color;
    output << ", ОС " << smartphone._os;
    output << "\n";
    return output;
}
