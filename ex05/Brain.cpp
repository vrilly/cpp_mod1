// Created by Tom Jans on 30-07-20.
#include "Brain.hpp"
Brain::Brain()
	: iq(100)
{}
std::string Brain::identify() const
{
	std::stringstream str;
	str << this;
	return (str.str());
}
