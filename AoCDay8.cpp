#include "AoCDay8.h"

using namespace std;

int AoCDay8::Q1() {
    int row = 0;
    inputFile.open(R"(C:\Users\cfintern\Documents\AdventOfCode22\AoCDay8Input.txt)");
    while (getline(inputFile, digits)) {
        for (int i = 0; i < 99; ++i) {
            int digit = (int (digits[i])) - 48;
            treeArray[row][i] = digit;
        }
        row++;
    }
    inputFile.close();

    for (int i = 0; i < 99; i++) {
        for (int j = 0; j < 99; j++) {
            if (i == 0 || i == 98 || j == 0 || j == 98) {
                answer1++;
                continue;
            }
            for (int k = j - 1; k > -1; --k) {
                if (treeArray[i][j] > treeArray[i][k]) {
                    ;
                }
                else {
                    goto notVisibleFromLeft;
                }
            }
            answer1++;
            continue;
            notVisibleFromLeft:

            for (int k = j + 1; k < 99; k++) {
                if (treeArray[i][j] > treeArray[i][k]) {
                    ;
                }
                else {
                    goto notVisibleFromRight;
                }
            }
            answer1++;
            continue;
            notVisibleFromRight:

            for (int k = i - 1; k > -1; --k) {
                if (treeArray[i][j] > treeArray[k][j]) {
                    ;
                }
                else {
                    goto notVisibleFromUp;
                }
            }
            answer1++;
            continue;
            notVisibleFromUp:

            for (int k = i + 1; k < 99; k++) {
                if (treeArray[i][j] > treeArray[k][j]) {
                    ;
                }
                else {
                    goto notVisibleFromDown;
                }
            }
            answer1++;
            continue;
            notVisibleFromDown:;
        }
    }

    return answer1;
}

int AoCDay8::Q2() {
    for (int i = 0; i < 99; i++) {
        for (int j = 0; j < 99; j++) {
            int scoreLeft = 0, scoreRight = 0, scoreUp = 0, scoreDown = 0;
            for (int k = j - 1; k > -1; --k) {
                if (treeArray[i][j] > treeArray[i][k]) {
                    scoreLeft++;
                }
                else {
                    scoreLeft++;
                    goto leftLimit;
                }
            }
            leftLimit:

            for (int k = j + 1; k < 99; k++) {
                if (treeArray[i][j] > treeArray[i][k]) {
                    scoreRight++;
                }
                else {
                    scoreRight++;
                    goto rightLimit;
                }
            }
            rightLimit:

            for (int k = i - 1; k > -1; --k) {
                if (treeArray[i][j] > treeArray[k][j]) {
                    scoreUp++;
                }
                else {
                    scoreUp++;
                    goto upLimit;
                }
            }
            upLimit:

            for (int k = i + 1; k < 99; k++) {
                if (treeArray[i][j] > treeArray[k][j]) {
                    scoreDown++;
                }
                else {
                    scoreDown++;
                    goto downLimit;
                }
            }
            downLimit:

            int totalScore = scoreRight * scoreLeft * scoreUp * scoreDown;
            if (totalScore > answer2) {
                answer2 = totalScore;
            }
        }
    }

    return answer2;
}