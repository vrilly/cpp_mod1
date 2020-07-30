// Created by Tom Jans on 30-07-20.

#include <string>
#include <iostream>

void display_ptr(std::string *s)
{
	std::cout << s << " : " << *s << std::endl;
}

void display_ref(std::string &s)
{
	std::cout << &s << " : " << s << std::endl;
}

int main()
{
	std::string s("HI THIS IS BRAIN");
	display_ptr(&s);
	display_ref(s);
	return 0;
}
