// Created by Tom Jans on 7/29/20.

void memoryLeak()
{
    std::string *panther = new std::string("String panther");
    std::cout << *panther << std::endl;
    delete panther;
}
