// Created by Tom Jans on 7/29/20.

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>

class Zombie
{
    std::string name;
    std::string type;
public:
    Zombie(const std::string &name, const std::string &type);
    Zombie(const std::string &type);
    void announce();
};

#endif //ZOMBIE_HPP
