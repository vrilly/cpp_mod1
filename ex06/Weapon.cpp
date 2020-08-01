// Created by Tom Jans on 30-07-20.
#include "Weapon.hpp"

const std::string &Weapon::getType() const
{
    return type;
}

void Weapon::setType(const std::string &newType)
{
    this->type = newType;
}

Weapon::Weapon(const std::string &type)
    : type(type)
{}
