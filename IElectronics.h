#pragma once
#include <string>

class IElectronics {
protected:
    std::string _vendor;
    std::string _model;
public:
    IElectronics() {};
    IElectronics(const std::string &vendor, const std::string &model);
    virtual void ShowSpecs() {};
    virtual std::string getVendor() {return _vendor;};
    virtual void setVendor(const std::string &vendor) {};
    virtual std::string getModel() {return _model;};
    virtual void setModel(const std::string &model) {};

    virtual ~IElectronics() = 0;
};