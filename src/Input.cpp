#include <map>
#include <fstream>

#include <Input.h>
#include <Slide.h>

static map<string, bool> inputfiles = {
    {"data/a_example.txt", true},
    {"data/b_lovely_landscapes.txt", true},
    {"data/c_memorable_moments.txt", true},
    {"data/d_pet_pictures.txt", true},
    {"data/e_shiny_selfies.txt", true}};

string input_get(int argc, char *argv[])
{
    string inputfile;
    if (argc != 2)
    {
        cout << "Please append an input file" << endl;
        exit(EXIT_FAILURE);
    }

    inputfile = string(argv[1]);

    if (!inputfiles.count(inputfile))
    {
        cout << "Invalid input file: " << inputfile << endl;
        exit(EXIT_FAILURE);
    }

    return inputfile;
}

void input_parse(string inputfile, Slide **slides)
{
    int nr_slides;
    ifstream in_stream(inputfile, ifstream::in);
    in_stream >> nr_slides;
    cout << nr_slides << endl;

    *slides = (Slide *)calloc(nr_slides, sizeof(Slide));

    for (int i = 0; i < nr_slides; i++)
    {
        int nr_tags;
        string orientation;

        in_stream >> nr_tags;
        (*slides)[i].setNrTags(nr_tags);

        // in_stream >> orientation;
        // (*slides)[i].setOrientation(orientation);

        for (int j = 0; j < nr_tags; j++)
        {
            string tag;
            in_stream >> tag;
            (*slides)[i].addTag(tag);
        }
        cout << "added" << endl;
    }
}