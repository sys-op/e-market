#pragma once
#include "Device.h"
#include <string>

class Player : public Device
{
private:
    unsigned _totalTracks {0};
public:
    Player();
    Player(const unsigned &totalTracks, const unsigned &batteryLife , const std::string &vendor, const std::string &model);
    void ShowSpecs() override;
    void ShowTracks();
    ~Player();

    unsigned getTotalTracks() const;
    void setTotalTracks(const unsigned &totalTracks);

    friend std::ostream &operator<<(std::ostream &output, const Player &player);
};