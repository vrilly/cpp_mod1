// Created by Tom Jans on 7/29/20.

#include <cstdlib>
#include <ctime>
#include "ZombieEvent.hpp"

int main()
{
    std::srand(std::time(NULL));
    ZombieEvent event;
    Zombie *zombie;
    event.randomChump();
    event.setZombieType("Boomer");
    zombie = event.newZombie("Default name");
    zombie->announce();
    delete zombie;
    event.setZombieType("Witch");
    zombie = event.newZombie("The screaming zombie");
    zombie->announce();
    delete zombie;
    event.randomChump();
    return 0;
}