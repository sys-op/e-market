#include "Player.h"
#include <iostream>

Player::Player()
{
    if (_isLogging) std::cout << "Создан " << *this;
}

Player::Player(const unsigned &totalTracks,const unsigned &batteryLife, const std::string &vendor, const std::string &model) : _totalTracks {totalTracks}, Device(batteryLife, vendor, model)
{
    if (_isLogging) std::cout << "Создан " << *this;
}

void Player::ShowSpecs()
{
    std::cout << *this;
}

void Player::ShowTracks()
{
    std::cout << "Плеер, количество треков: " << this->_totalTracks << "\n";
}

Player::~Player()
{
    if (_isLogging) std::cout << "Удален " << *this;
}

unsigned Player::getTotalTracks() const
{
    return this->_totalTracks;
}

void Player::setTotalTracks(const unsigned &totalTracks)
{
    this->_totalTracks = totalTracks;
}

std::ostream &operator<<(std::ostream &output, const Player &player)
{
    output << "Плеер, время работы аккумулятора " << player._batteryLife;
    output << ", производитель " << player._vendor;
    output << ", модель " << player._model;
    output << ", количество треков: " << player._totalTracks;
    output << "\n";
    return output;
}
