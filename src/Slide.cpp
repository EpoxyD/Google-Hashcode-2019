#include <iostream>

#include <Slide.h>

Slide::Slide()
{
    std::cout << "Create slide" << std::endl;
}

Slide::~Slide()
{
    std::cout << "Delete slide" << std::endl;
}