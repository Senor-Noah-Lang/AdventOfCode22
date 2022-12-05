#include <fstream>
#include <string>
#include <iostream>
#include <vector>

class AoCDay4 {
public:
    std::fstream inputFile;
    std::string line;
    int commaIndex;
    int dashIndexOne;
    int dashIndexTwo;
    std::string sectionOne;
    std::string sectionTwo;
    int num1, num2, num3, num4;
    std::vector<std::string> wordVector;
    int amount = 0, amount2 = 0;
    int Q1();
    int Q2();
};



