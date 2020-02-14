#include <map>
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
    if (argc == 2)
        inputfile = string(argv[1]);
    else
    {
        cout << "Please insert an input file: ";
        cin >> inputfile;
        cout.flush();
    }

    if (!inputfiles.count(inputfile))
    {
        cout << "Invalid input file: " << inputfile << endl;
        exit(EXIT_FAILURE);
    }

    return inputfile;
}

bool parseInput(string inputfile)
{
    return true;
}