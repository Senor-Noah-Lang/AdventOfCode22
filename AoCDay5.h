#include <fstream>
#include <iostream>
#include <string>
#include <stack>

class AoCDay5 {
public:
    std::stack<char> arrayStacks[9];
    std::fstream inputFile;
    std::string line, answer, answer2;
    int crateAmount = 0, takeStack = 0, receiveStack = 0;
    int firstSpaceIndex, secondSpaceIndex;
    void initializeStacks();
    std::string Q1();
    std::string Q2();
};

