#pragma once
#include "Appliances.h"
#include "DisplayResolution.h"
#include <string>

class TVset : public Appliances
{
protected:
    displayResolution_t _displayResolution {};
public:
    TVset();
    TVset(const displayResolution_t &displayResolution, const unsigned &weight, const std::string &vendor, const std::string &model);
    void ShowSpecs() override;
    ~TVset();

    displayResolution_t getDisplayResolution() const;
    void setDisplayResolution(const displayResolution_t &displayResolution);

    friend std::ostream &operator<<(std::ostream &output, const TVset &TVset);
};