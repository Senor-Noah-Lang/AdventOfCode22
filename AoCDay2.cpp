#include "AoCDay2.h"

using namespace std;

int AoCDay2::Q1() {
    inputFile.open(R"(C:\Users\mechm\CLionProjects\AdventOfCode22\AoCDay2Input.txt)");
    while (getline(inputFile, line)) {
        char opponentLetter = line.at(0);
        char myLetter = line.at(2);
        switch (myLetter) {
            case 'X':
                score += 1;
                switch (opponentLetter) {
                    case 'A': score += 3; break;
                    case 'C': score += 6; break;
                }
                break;
            case 'Y':
                score += 2;
                switch (opponentLetter) {
                    case 'A': score += 6; break;
                    case 'B': score += 3; break;
                }
                break;
            case 'Z':
                score += 3;
                switch (opponentLetter) {
                    case 'B': score += 6; break;
                    case 'C': score += 3; break;
                }
                break;
        }
    }
    inputFile.close();
    return score;
}

int AoCDay2::Q2() {
    inputFile.open(R"(C:\Users\mechm\CLionProjects\AdventOfCode22\AoCDay2Input.txt)");
    while (getline(inputFile, line)) {
        char opponentLetter = line.at(0);
        char myLetter = line.at(2);
        switch (myLetter) {
            case 'X':
                switch (opponentLetter) {
                    case 'A': score2 += 3; break;
                    case 'B': score2 += 1; break;
                    case 'C': score2 += 2; break;
                }
                break;
            case 'Y':
                switch (opponentLetter) {
                    case 'A': score2 += 4; break;
                    case 'B': score2 += 5; break;
                    case 'C': score2 += 6; break;
                }
                break;
            case 'Z':
                switch (opponentLetter) {
                    case 'A': score2 += 8; break;
                    case 'B': score2 += 9; break;
                    case 'C': score2 += 7; break;
                }
                break;
        }
    }
    inputFile.close();
    return score2;
}