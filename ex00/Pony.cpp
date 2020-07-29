// Created by Tom Jans on 7/29/20.

#include "Pony.hpp"

Pony::Pony(Pony::pony_color color, const std::string &name)
    : color(color), name(name)
{}

void Pony::honk()
{
    std::cout << "I'm a " << get_color_name(color)
              << " coloured pony, my name is "
              << name << " and i do a Honk!" << std::endl;
}

std::string Pony::get_color_name(Pony::pony_color color)
{
    switch (color) {
        case COLOR_RAINBOW:return "Rainbow";
        case COLOR_BLACK:return "Black";
        case COLOR_WHITE:return "White";
    }
}

Pony::~Pony()
{
    std::cout << name << " Has been removed/deallocated" << std::endl;
}
