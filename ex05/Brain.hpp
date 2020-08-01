// Created by Tom Jans on 30-07-20.
#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>
#include <sstream>

class Brain
{
    int iq;
public:
    Brain();
    std::string identify() const;
};

#endif //BRAIN_HPP
