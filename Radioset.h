#pragma once
#include "Device.h"
#include "Appliances.h"
#include <string>

class Radioset : public Device, public Appliances
{
protected:
    unsigned _wave {0};
public:
    Radioset();
    Radioset(const unsigned &wave, const unsigned &batteryLife, const unsigned &weight, const std::string &vendor, const std::string &model);
    void ShowSpecs() override;
    std::string getVendor() override;
    void setVendor(const std::string &vendor) override;
    std::string getModel() override;
    void setModel(const std::string &model) override;
    ~Radioset();

    unsigned getWave();
    void setWave(const unsigned &wave);

    friend std::ostream &operator<<(std::ostream &output, const Radioset &Radioset);
};