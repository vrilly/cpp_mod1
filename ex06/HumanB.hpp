// Created by Tom Jans on 30-07-20.
#ifndef HUMANB_HPP
#define HUMANB_HPP


#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
    const Weapon *weapon;
    std::string name;
public:
    void attack() const;
    HumanB(const std::string &name, const Weapon &weapon);
};


#endif //HUMANB_HPP
