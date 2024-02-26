#pragma once
#include "Appliances.h"
#include <string>

class Fridge : public Appliances
{
protected:
    std::string _color {};
public:
    Fridge();
    Fridge(const std::string &color, const unsigned &weight, const std::string &vendor, const std::string &model);
    void ShowSpecs() override;
    ~Fridge();

    std::string getColor() const;
    void setColor(const std::string &color);

    friend std::ostream &operator<<(std::ostream &output, const Fridge &fridge);
};