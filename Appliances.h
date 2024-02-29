#pragma once
#include "IElectronics.h"
#include <string>

class Appliances : virtual public IElectronics
{
protected:
    unsigned int _weight {0};
    // std::string _vendor;
    // std::string _model;
    const bool _isLogging {false};
public:
    Appliances();
    Appliances(const unsigned int &weight, const std::string &vendor, const std::string &model);
    virtual void ShowSpecs() override;
    virtual std::string getVendor() ;
    virtual void setVendor(const std::string &vendor);
    virtual std::string getModel();
    virtual void setModel(const std::string &model);
    virtual ~Appliances();

    unsigned getWeight() const;
    void setWeight(const unsigned &weight);

    friend std::ostream &operator<<(std::ostream &output, const Appliances &appliances);
};