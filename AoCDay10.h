#include <fstream>
#include <string>
#include <iostream>

class AoCDay10 {
public:
    std::fstream inputFile;
    std::string line;
    int answer1 = 0, answer2 = 0;
    int cycleCount = 0, registerCount = 1;

    char spriteArray[40];

    int Q1();
    void Q2();
};
