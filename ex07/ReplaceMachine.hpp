// Created by Tom Jans on 30-07-20.
#ifndef REPLACEMACHINE_HPP
#define REPLACEMACHINE_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <exception>

class ReplaceMachine
{
    enum result
    {
        RESULT_OK, RESULT_EOF, RESULT_ERROR
    };
    const std::string s1;
    const std::string s2;
    std::ifstream src_file;
    std::ofstream dst_file;
    size_t counter;
    result process_line();
public:
    ReplaceMachine(const std::string &src,
                   const std::string &s1,
                   const std::string &s2);
    size_t replace();
};

#endif //REPLACEMACHINE_HPP
