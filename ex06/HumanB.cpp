// Created by Tom Jans on 30-07-20.
#include "HumanB.hpp"
HumanB::HumanB(const std::string &name, const Weapon &weapon)
	: weapon(&weapon), name(name)
{}
void HumanB::attack() const
{
	std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}
