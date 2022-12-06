#include "AoCDay5.h"

using namespace std;

void AoCDay5::initializeStacks() {
    arrayStacks[0].push('B');
    arrayStacks[0].push('S');
    arrayStacks[0].push('V');
    arrayStacks[0].push('Z');
    arrayStacks[0].push('G');
    arrayStacks[0].push('P');
    arrayStacks[0].push('W');

    arrayStacks[1].push('J');
    arrayStacks[1].push('V');
    arrayStacks[1].push('B');
    arrayStacks[1].push('C');
    arrayStacks[1].push('Z');
    arrayStacks[1].push('F');

    arrayStacks[2].push('V');
    arrayStacks[2].push('L');
    arrayStacks[2].push('M');
    arrayStacks[2].push('H');
    arrayStacks[2].push('N');
    arrayStacks[2].push('Z');
    arrayStacks[2].push('D');
    arrayStacks[2].push('C');

    arrayStacks[3].push('L');
    arrayStacks[3].push('D');
    arrayStacks[3].push('M');
    arrayStacks[3].push('Z');
    arrayStacks[3].push('P');
    arrayStacks[3].push('F');
    arrayStacks[3].push('J');
    arrayStacks[3].push('B');

    arrayStacks[4].push('V');
    arrayStacks[4].push('F');
    arrayStacks[4].push('C');
    arrayStacks[4].push('G');
    arrayStacks[4].push('J');
    arrayStacks[4].push('B');
    arrayStacks[4].push('Q');
    arrayStacks[4].push('H');

    arrayStacks[5].push('G');
    arrayStacks[5].push('F');
    arrayStacks[5].push('Q');
    arrayStacks[5].push('T');
    arrayStacks[5].push('S');
    arrayStacks[5].push('L');
    arrayStacks[5].push('B');

    arrayStacks[6].push('L');
    arrayStacks[6].push('G');
    arrayStacks[6].push('C');
    arrayStacks[6].push('Z');
    arrayStacks[6].push('V');

    arrayStacks[7].push('N');
    arrayStacks[7].push('L');
    arrayStacks[7].push('G');

    arrayStacks[8].push('J');
    arrayStacks[8].push('F');
    arrayStacks[8].push('H');
    arrayStacks[8].push('C');
}

string AoCDay5::Q1() {
    initializeStacks();
    inputFile.open(R"(C:\Users\cfintern\Documents\AdventOfCode22\AoCDay5Input.txt)");
    while (getline(inputFile, line)) {
        receiveStack = stoi(line.substr(line.length() - 1));
        takeStack = stoi(line.substr(line.length() - 6, 1));
        firstSpaceIndex = line.find(' ');
        secondSpaceIndex = line.find(' ', firstSpaceIndex + 1);
        crateAmount = stoi(line.substr(firstSpaceIndex + 1, secondSpaceIndex));
        for (int i = 0; i < crateAmount; i++) {
            arrayStacks[receiveStack - 1].push(arrayStacks[takeStack - 1].top());
            arrayStacks[takeStack - 1].pop();
        }
    }
    inputFile.close();

    for (auto arr: arrayStacks) {
        answer += arr.top();
    }
    return answer;
}

string AoCDay5::Q2() {
    initializeStacks();
    inputFile.open(R"(C:\Users\cfintern\Documents\AdventOfCode22\AoCDay5Input.txt)");
    while (getline(inputFile, line)) {
        receiveStack = stoi(line.substr(line.length() - 1));
        takeStack = stoi(line.substr(line.length() - 6, 1));
        firstSpaceIndex = line.find(' ');
        secondSpaceIndex = line.find(' ', firstSpaceIndex + 1);
        crateAmount = stoi(line.substr(firstSpaceIndex + 1, secondSpaceIndex));
        char boxArray[crateAmount];
        for (int i = 0; i < crateAmount; i++) {
            boxArray[i] = arrayStacks[takeStack - 1].top();
            arrayStacks[takeStack - 1].pop();
        }
        for (int i = crateAmount - 1; i >= 0; --i) {
            arrayStacks[receiveStack - 1].push(boxArray[i]);
        }
    }
    inputFile.close();

    for (auto arr: arrayStacks) {
        answer2 += arr.top();
    }
    return answer2;
}
