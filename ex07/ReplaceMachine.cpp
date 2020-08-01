// Created by Tom Jans on 30-07-20.
#include "ReplaceMachine.hpp"

ReplaceMachine::ReplaceMachine(const std::string &src,
                               const std::string &s1,
                               const std::string &s2)
    : s1(s1), s2(s2), counter(0)
{
    src_file.open(src.c_str());
    if (!src_file.is_open())
        throw std::runtime_error("Cannot open source file");
    dst_file.open((src + ".replace").c_str());
    if (!dst_file.is_open())
        throw std::runtime_error("Cannot create destination file");
    if (!s1.length() || !s2.length())
        throw std::runtime_error("Invalid input.");
}

ReplaceMachine::result ReplaceMachine::process_line()
{
    std::string input;

    if (src_file.eof())
        return ReplaceMachine::RESULT_EOF;
    if (!src_file.good())
        return ReplaceMachine::RESULT_ERROR;
    std::getline(src_file, input);
    if (!input.length() && src_file.eof())
        return RESULT_EOF;
    size_t len = input.find(s1);
    while (len != std::string::npos) {
        counter++;
        input.replace(len, s1.length(), s2);
        len = input.find(s1, len + s2.length());
    }
    dst_file << input << std::endl;
    return ReplaceMachine::RESULT_OK;
}

size_t ReplaceMachine::replace()
{
    result r = RESULT_OK;

    while (r == RESULT_OK)
        r = process_line();
    if (r == RESULT_ERROR)
        throw std::runtime_error("error");
    return counter;
}
