// Created by Tom Jans on 7/29/20.

#ifndef PONY_HPP
#define PONY_HPP

#include <string>
#include <iostream>

class Pony
{
public:
    enum pony_color
    {
        COLOR_RAINBOW,
        COLOR_BLACK,
        COLOR_WHITE
    };
    virtual ~Pony();
    Pony(pony_color color, const std::string &name);
    void honk();
    static std::string get_color_name(Pony::pony_color color);
private:
    pony_color color;
    std::string name;
};

#endif //PONY_HPP
