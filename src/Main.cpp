#include <algorithm>
#include <iostream>
#include <map>
#include <fstream>
#include <cstring>

#include <Slide.h>

using namespace std;

static map<string, bool> inputfiles = {
    {"a_example.txt", true},
    {"b_lovely_landscapes.txt", true},
    {"c_memorable_moments.txt", true},
    {"d_pet_pictures.txt", true},
    {"e_shiny_selfies.txt", true}};

string getInput(int argc, char *argv[])
{
    string inputfile;
    if(argc == 2)
        inputfile = string(argv[1]);
    else
    {
        cout << "Please insert an input file: ";
        cin >> inputfile;
        cout.flush();
    }

    if (!inputfiles.count(inputfile))
    {
        cout << "Invalid input file: " << inputfile;
        exit(EXIT_FAILURE);
    }

    return inputfile;
}

bool parseInput(string inputfile)
{
    return true;
}

int main(int argc, char *argv[])
{
    string inputfile = getInput(argc, argv);
    parseInput(inputfile);

    return 0;
}