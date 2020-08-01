// Created by Tom Jans on 7/29/20.

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
    zombies = new Zombie[n];
    zombie_count = n;
}

void ZombieHorde::announce()
{
    for (int i = 0; i < zombie_count; i++)
        zombies[i].announce();
}

ZombieHorde::~ZombieHorde()
{
    delete[] zombies;
}
