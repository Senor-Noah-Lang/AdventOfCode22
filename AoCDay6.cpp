#include "AoCDay6.h"

using namespace std;

int AoCDay6::Q1() {
    inputFile.open(R"(C:\Users\cfintern\Documents\AdventOfCode22\AoCDay6Input.txt)");
    getline(inputFile, line);
    for (int i = 0; i < line.length() - 3; i++) {
        c1 = line.at(i);
        c2 = line.at(i + 1);
        c3 = line.at(i + 2);
        c4 = line.at(i + 3);

        char lineCharTemp[4] = {c1, c2, c3, c4};
        string lineChar;
        for (auto c: lineCharTemp) {
            if (lineChar.find(c) != string::npos) {
                goto stmt;
            }
            else {
                lineChar += c;
            }
        }

        return i + 4;
        stmt:;
    }

    inputFile.close();
}

int AoCDay6::Q2() {
    inputFile.open(R"(C:\Users\cfintern\Documents\AdventOfCode22\AoCDay6Input.txt)");
    getline(inputFile, line);
    for (int i = 0; i < line.length() - 13; i++) {
        char packetArray[14];
        for (int j = 0; j < 14; j++) {
            packetArray[j] = line.at(i + j);
        }
        string lineChar;
        for (auto c: packetArray) {
            if (lineChar.find(c) != string::npos) {
                goto stmt;
            }
            else {
                lineChar += c;
            }
        }
        return i + 14;

        stmt:;
    }

    inputFile.close();
}