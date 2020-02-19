#include <iostream>

#include <Input.h>
#include <Slide.h>

using namespace std;

vector<Slide *> add_slide()
{
    vector<Slide *> slides;
    Slide *new_slide = new Slide();
    new_slide->setNrTags(5);
    slides.push_back(new_slide);
    return slides;
}

int main(int argc, char *argv[])
{
    string inputfile = input_get(argc, argv);

    // Slide *slides = nullptr;
    // input_parse(inputfile, &slides);

    vector<Slide *> slides = add_slide();

    cout << slides[0]->getNrTags() << endl;

    return 0;
}