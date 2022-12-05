#include "AoCDay3.h"

using namespace std;

int AoCDay3::Q1() {
    inputFile.open(R"(C:\Users\mechm\CLionProjects\AdventOfCode22\AoCDay3Input.txt)");
    while (getline(inputFile, line)) {
        int halfSize = line.length() / 2;
        std::string usedLetters;
        string firstHalf = line.substr(0, halfSize);
        string secondHalf = line.substr(halfSize, halfSize);
        for (auto firstLetter: firstHalf) {
            if (usedLetters.find(firstLetter) != string::npos) {
                continue;
            }
            else {
                usedLetters += firstLetter;
                if (secondHalf.find(firstLetter) != string::npos) {
                    overlappedLetters += firstLetter;
                }
            }
        }
    }
    for (auto letter: overlappedLetters) {
        amount += letterValues.find(letter) + 1;
    }
    inputFile.close();
    return amount;
}

int AoCDay3::Q2() {
    inputFile.open(R"(C:\Users\mechm\CLionProjects\AdventOfCode22\AoCDay3Input.txt)");
    string line1, line2, line3;
    while (getline(inputFile, line1)) {
        getline(inputFile, line2);
        getline(inputFile, line3);
        for (auto letter: line1) {
            if (line2.find(letter) != string::npos && line3.find(letter) != string::npos) {
                overlappedLetters2 += letter;
                break;
            }
        }
    }
    inputFile.close();
    for (auto letter: overlappedLetters2) {
        amount2 += letterValues.find(letter) + 1;
    }
    return amount2;
}