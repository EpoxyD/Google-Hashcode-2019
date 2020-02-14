#include <iostream>

#include <Input.h>
#include <Slide.h>

using namespace std;

int main(int argc, char *argv[])
{
    string inputfile = getInput(argc, argv);
    parseInput(inputfile);

    return 0;
}