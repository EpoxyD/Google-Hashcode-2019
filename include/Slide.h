#pragma once

#include <list>

using namespace std;

class Slide
{
public:
    Slide();
    ~Slide();

    int nr_tags;
    string orientation;
    list<string> tags;
};