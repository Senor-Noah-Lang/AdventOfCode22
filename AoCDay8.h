#include <fstream>
#include <iostream>
#include <string>

class AoCDay8 {
public:
    std::fstream inputFile;
    std::string digits;
    int answer1 = 0, answer2 = 0;
    int treeArray[99][99];

    int Q1();
    int Q2();
};

