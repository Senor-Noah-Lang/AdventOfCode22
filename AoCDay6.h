#include <fstream>
#include <iostream>
#include <string>

class AoCDay6 {
public:
    std::fstream inputFile;
    std::string line;
    char c1, c2, c3, c4;
    int answer = -1;
    int Q1();
    int Q2();
};

