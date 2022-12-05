#include <string>
#include <fstream>
#include <iostream>

class AoCDay3 {
public:
    std::fstream inputFile;
    std::string letterValues {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    std::string overlappedLetters;
    std::string overlappedLetters2;
    int amount = 0;
    int amount2 = 0;
    std::string line;
    int Q1();
    int Q2();
};

