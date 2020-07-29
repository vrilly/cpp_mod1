// Created by Tom Jans on 7/29/20.

#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde
{
    Zombie *zombies;
    int zombie_count;
public:
    ZombieHorde(int n);
    void announce();
    virtual ~ZombieHorde();
};

#endif //ZOMBIEHORDE_HPP
