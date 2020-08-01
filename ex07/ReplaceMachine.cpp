// Created by Tom Jans on 30-07-20.
#include "ReplaceMachine.hpp"

ReplaceMachine::ReplaceMachine(std::string src, std::string s1, std::string s2)
{
	src_file.open(src.c_str());
	if (!src_file.is_open())
		throw std::runtime_error("Cannot open source file");
	dst_file.open((src + ".replace").c_str());
	if (!dst_file.is_open())
		throw std::runtime_error("Cannot create destination file");
}
