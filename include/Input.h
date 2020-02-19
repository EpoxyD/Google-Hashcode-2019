#pragma once

#include <iostream>
#include <vector>

#include <Slide.h>

using namespace std;

string input_get(int argc, char *argv[]);
void input_parse(string inputfile, Slide **slides);