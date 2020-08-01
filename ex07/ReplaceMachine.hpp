// Created by Tom Jans on 30-07-20.
#ifndef REPLACEMACHINE_HPP
#define REPLACEMACHINE_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <exception>

class ReplaceMachine
{
	enum result {RESULT_OK, RESULT_EOF, RESULT_ERROR};
	std::ifstream src_file;
	std::ofstream dst_file;
	result process_line();
public:
	ReplaceMachine(std::string src, std::string s1, std::string s2);
};

#endif //REPLACEMACHINE_HPP
