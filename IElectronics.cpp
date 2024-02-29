#include "IElectronics.h"

IElectronics::~IElectronics()
{
}

IElectronics::IElectronics(const std::string &vendor, const std::string &model) : _vendor{vendor}, _model {model}
{
}