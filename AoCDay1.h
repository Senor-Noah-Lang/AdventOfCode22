#include <fstream>
#include <vector>
#include <string>
#include <algorithm>

class AoCDay1 {
public:
    std::vector<int> listOfCalories;
    std::fstream inputFile;
    std::string line;
    int amount;
    int answer;
    int Q1();
    int Q2();
};
