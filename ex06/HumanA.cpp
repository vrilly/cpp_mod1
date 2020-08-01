// Created by Tom Jans on 30-07-20.
#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, const Weapon &weapon)
    : weapon(&weapon), name(name)
{}

void HumanA::attack() const
{
    std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}
