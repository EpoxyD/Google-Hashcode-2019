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

int Slide::getNrTags()
{
    return this->nr_tags;
}

string Slide::getOrientation()
{
    return this->orientation;
}

string *Slide::getTags()
{
    return this->tags;
}

void Slide::setNrTags(int nr_tags)
{
    this->nr_tags = nr_tags;
}

void Slide::setOrientation(string orientation)
{
    this->orientation = orientation;
}

void Slide::addTag(string tag)
{
    this->nr_tags++;
    this->tags = (string *)reallocarray(this->tags, this->nr_tags, sizeof(string));
    this->tags[this->nr_tags] = tag;
}

void Slide::removeTag(string tag)
{
    return;
}