#pragma once
#include "IElectronics.h"

class Device : virtual public IElectronics
{
protected:
    unsigned _batteryLife {0};
    std::string _vendor;
    std::string _model;
    const bool _isLogging {false};
public:
    Device();
    Device(const unsigned &batteryLife, const std::string &vendor, const std::string &model);
    virtual void ShowSpecs() override;
    virtual std::string getVendor();
    virtual void setVendor(const std::string &vendor);
    virtual std::string getModel();
    virtual void setModel(const std::string &model);
    virtual ~Device();

    unsigned getBatteryLife() const;
    void setBatteryLife(const unsigned &batteryLife);

    friend std::ostream &operator<<(std::ostream &output, const Device &device);
};