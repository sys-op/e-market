#pragma once
#include "Device.h"
#include "DisplayResolution.h"
#include <string>


class Smartphone : public Device
{
protected:
    displayResolution_t _displayResolution {0, 0};
    std::string _color {};
    std::string _os {};
public:
    Smartphone();
    Smartphone(const displayResolution_t &displayResolution, const std::string &color, const std::string &os, const unsigned &batteryLife, const std::string &vendor, const std::string &model);
    void ShowSpecs() override;
    void ShowDisplayResolution();
    void ShowColor();
    void ShowOS();
    ~Smartphone();

    displayResolution_t getDisplayResolution() const;
    std::string getColor() const;
    std::string getOs() const;

    void setDisplayResolution(const displayResolution_t &displayResolution);
    void setColor(const std::string &color);
    void setOs(const std::string &os);

    friend std::ostream &operator<<(std::ostream &output, const Smartphone &smartphone);
};