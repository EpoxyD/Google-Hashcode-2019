#include <map>
#include <fstream>
#include <Input.h>

static map<string, bool> inputfiles = {
    {"data/a_example.txt", true},
    {"data/b_lovely_landscapes.txt", true},
    {"data/c_memorable_moments.txt", true},
    {"data/d_pet_pictures.txt", true},
    {"data/e_shiny_selfies.txt", true}};

string getInput(int argc, char *argv[])
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

bool parseInput(string inputfile)
{
    int nr_slides;
    ifstream in_stream(inputfile, ifstream::in);
    in_stream >> nr_slides;
    cout << nr_slides << endl;

    return true;
}