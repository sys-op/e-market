#pragma once
#include "Device.h"
#include "Appliances.h"
#include <string>

class Mixer : public Device, Appliances
{
protected:
    unsigned _power {0};
public:
    Mixer();
    Mixer(const unsigned &power, const unsigned &batteryLife, const unsigned &weight, const std::string &vendor, const std::string &model);
    void ShowSpecs() override;
    std::string getVendor() override;
    void setVendor(const std::string &vendor) override;
    std::string getModel() override;
    void setModel(const std::string &model) override;
    ~Mixer();

    unsigned getPower() const;
    void setPower(const unsigned &power);

    friend std::ostream &operator<<(std::ostream &output, const Mixer &mixer);
};