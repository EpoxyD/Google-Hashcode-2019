#include <iostream>

class Slide
{
private:
    const int m_nr_tags;
    const char * m_orientation;
    char * tag_list[];
public:
    Slide(const int nr_tags);
    ~Slide();
};

Slide::Slide(const int nr_tags) : m_nr_tags(nr_tags)
{
    std::cout << "Create slide" << std::endl;
}

Slide::~Slide()
{
    std::cout << "Delete slide" << std::endl;
}
