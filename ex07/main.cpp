// Created by Tom Jans on 30-07-20.

#include "ReplaceMachine.hpp"

int main(int argc, char **argv)
{
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " [source file] [find] [replace]"
                  << std::endl;
        return 0;
    }
    try {
        ReplaceMachine replaceMachine(argv[1], argv[2], argv[3]);
        std::cout << "Replaced " << replaceMachine.replace() << " occurences."
                  << std::endl;
    }
    catch (const std::runtime_error &e) {
        std::cerr << e.what() << std::endl;
        return -1;
    }
    return 0;
}
