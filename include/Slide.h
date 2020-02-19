#pragma once

#include <vector>

using namespace std;

class Slide
{
public:
    Slide();
    ~Slide();

    int getNrTags();
    string getOrientation();
    string *getTags();

    void setNrTags(int nr_tags);
    void setOrientation(string orientation);

    void addTag(string tag);
    void removeTag(string tag);

private:
    int nr_tags;
    string orientation;
    string * tags;
};