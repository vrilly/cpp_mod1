// Created by Tom Jans on 30-07-20.
#ifndef HUMANA_HPP
#define HUMANA_HPP


#include <string>
#include <iostream>
#include "Weapon.hpp"
class HumanA
{
	const Weapon *weapon;
	std::string name;
public:
	void attack() const;
	HumanA(const std::string &name, const Weapon &weapon);
};


#endif //HUMANA_HPP
