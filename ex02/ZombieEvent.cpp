// Created by Tom Jans on 7/29/20.

#include "ZombieEvent.hpp"

Zombie *ZombieEvent::newZombie(std::string name)
{
    return new Zombie(name, type);
}

void ZombieEvent::setZombieType(std::string type)
{
    this->type = type;
}

Zombie *ZombieEvent::newZombie()
{
    return new Zombie(type);
}

void ZombieEvent::randomChump()
{
    Zombie *zombie = newZombie();
    zombie->announce();
    delete zombie;
}

ZombieEvent::ZombieEvent()
    : type("Smoker")
{
}
