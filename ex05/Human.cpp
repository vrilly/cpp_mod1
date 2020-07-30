// Created by Tom Jans on 30-07-20.
#include "Human.hpp"
std::string Human::identify()
{
	return brain.identify();
}
const Brain &Human::getBrain()
{
	return brain;
}
