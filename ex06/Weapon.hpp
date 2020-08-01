// Created by Tom Jans on 30-07-20.
#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon
{
    std::string type;
public:
    const std::string &getType() const;
    Weapon(const std::string &type);
    void setType(const std::string &newType);
};

#endif //WEAPON_HPP
