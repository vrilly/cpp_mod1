// Created by Tom Jans on 7/29/20.

#include "Zombie.hpp"

Zombie::Zombie(const std::string &name, const std::string &type)
    : name(name), type(type)
{}

void Zombie::announce()
{
    std::cout << "<" << name << " (" << type << ")> i eat ze braains"
              << std::endl;
}

Zombie::Zombie(const std::string &type)
    : type(type)
{
    const std::string names[] = {
        "Richard Stallman",
        "Linus Torvalds",
        "Lennart Poettering",
        "Hans Reiser",
        "John Sullivan",
        "Hans De Groot",
        "Ricardo Galli"
    };
    int random_index = std::rand() % 7;
    name = names[random_index];
}
