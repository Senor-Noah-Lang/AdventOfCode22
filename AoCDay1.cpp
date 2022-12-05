#include "AoCDay1.h"

using namespace std;

int AoCDay1::Q1() {
    amount = 0;
    answer = 0;
    inputFile.open(R"(C:\Users\mechm\CLionProjects\AdventOfCode22\AoCDay1Input.txt)");
    while (getline(inputFile, line)) {
        if (!line.empty()) {
            int num = stoi(line);
            amount += num;
        }
        else {
            listOfCalories.push_back(amount);
            amount = 0;
        }
    }
    inputFile.close();
    for (auto value: listOfCalories) {
        if (value > answer) {answer = value;}
    }
    return answer;
}

int AoCDay1::Q2() {
    sort(listOfCalories.begin(), listOfCalories.end());
    int elf1, elf2, elf3;
    elf1 = listOfCalories.at(listOfCalories.size() - 1);
    elf2 = listOfCalories.at(listOfCalories.size() - 2);
    elf3 = listOfCalories.at(listOfCalories.size() - 3);
    return elf1 + elf2 + elf3;
}
