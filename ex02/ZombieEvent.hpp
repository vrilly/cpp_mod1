// Created by Tom Jans on 7/29/20.

#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Zombie.hpp"

class ZombieEvent
{
    std::string type;
public:
    ZombieEvent();
    void setZombieType(std::string type);
    Zombie *newZombie(std::string name);
    Zombie *newZombie();
    void randomChump();
};

#endif //ZOMBIEEVENT_HPP
