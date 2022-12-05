#include "AoCDay4.h"

using namespace std;

int AoCDay4::Q1() {
    inputFile.open(R"(C:\Users\mechm\CLionProjects\AdventOfCode22\AoCDay4Input.txt)");
    while (getline(inputFile, line)) {
        commaIndex = line.find(',');
        sectionOne = line.substr(0, commaIndex);
        sectionTwo = line.substr(commaIndex + 1, line.length() - 1);
        dashIndexOne = sectionOne.find('-');
        dashIndexTwo = sectionTwo.find('-');
        num1 = stol(sectionOne.substr(0, dashIndexOne));
        num2 = stol(sectionOne.substr(dashIndexOne + 1, sectionOne.length() - 1));
        num3 = stol(sectionTwo.substr(0, dashIndexTwo));
        num4 = stol(sectionTwo.substr(dashIndexTwo + 1, sectionTwo.length() - 1));

        if (num1 >= num3 && num2 <= num4 || num3 >= num1 && num4 <= num2) {
            amount++;
        }
    }
    inputFile.close();
    return amount;
}

int AoCDay4::Q2() {
    inputFile.open(R"(C:\Users\mechm\CLionProjects\AdventOfCode22\AoCDay4Input.txt)");
    while (getline(inputFile, line)) {
        commaIndex = line.find(',');
        sectionOne = line.substr(0, commaIndex);
        sectionTwo = line.substr(commaIndex + 1, line.length() - 1);
        dashIndexOne = sectionOne.find('-');
        dashIndexTwo = sectionTwo.find('-');
        num1 = stol(sectionOne.substr(0, dashIndexOne));
        num2 = stol(sectionOne.substr(dashIndexOne + 1, sectionOne.length() - 1));
        num3 = stol(sectionTwo.substr(0, dashIndexTwo));
        num4 = stol(sectionTwo.substr(dashIndexTwo + 1, sectionTwo.length() - 1));

        if (num1 >= num3 && num1 <= num4 || num2 >= num3 && num2 <= num4 || num3 >= num1 && num3 <= num2 || num4 >= num1 && num4 <= num2) {
            cout << num1 << '-' << num2 << ',' << num3 << '-' << num4 << endl;
            amount2++;
        }
    }
    inputFile.close();

    return amount2;
}