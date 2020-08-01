// Created by Tom Jans on 7/29/20.

#include "Pony.hpp"

void ponyOnTheStack()
{

    Pony pony(Pony::COLOR_RAINBOW, "Stack powered pony");
    pony.honk();
}

void ponyOnTheHeap()
{
    Pony *pony = new Pony(Pony::COLOR_BLACK, "Heap powered pony");
    pony->honk();
    delete pony;
}

int main()
{
    std::cout << "HEAP!" << std::endl;
    ponyOnTheHeap();
    std::cout << "STACK!" << std::endl;
    ponyOnTheStack();
    return 0;
}
