// Created by Tom Jans on 30-07-20.
#ifndef HUMAN_HPP
#define HUMAN_HPP

#include <string>
#include "Brain.hpp"

class Human
{
	const Brain brain;
public:
	const Brain &getBrain();
	std::string identify();
};

#endif //HUMAN_HPP
