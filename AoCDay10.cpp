#include "AoCDay10.h"

using namespace std;

int AoCDay10::Q1() {
    inputFile.open(R"(C:\Users\cfintern\Documents\AdventOfCode22\AoCDay10Input.txt)");
    while (getline(inputFile, line)) {
        if (cycleCount > 220) {return answer1;}
        int spaceIndex = line.find(" ");
        string instruction = line.substr(0, spaceIndex);
        int number = -1;
        if (instruction == "noop") {
            cycleCount++;
            switch (cycleCount) {
                case 20: answer1 += cycleCount * registerCount; break;
                case 60: answer1 += cycleCount * registerCount; break;
                case 100: answer1 += cycleCount * registerCount; break;
                case 140: answer1 += cycleCount * registerCount; break;
                case 180: answer1 += cycleCount * registerCount; break;
                case 220: answer1 += cycleCount * registerCount; break;
            }
            continue;
        }
        else {number = stoi(line.substr(spaceIndex + 1, line.length() - 1));}

        for (int i =0; i < 2; i++) {
            cycleCount++;
            switch (cycleCount) {
                case 20: answer1 += cycleCount * registerCount; break;
                case 60: answer1 += cycleCount * registerCount; break;
                case 100: answer1 += cycleCount * registerCount; break;
                case 140: answer1 += cycleCount * registerCount; break;
                case 180: answer1 += cycleCount * registerCount; break;
                case 220: answer1 += cycleCount * registerCount; break;
            }
            if (i == 1) {registerCount += number;}
        }
    }
    inputFile.close();
    return answer1;
}

void AoCDay10::Q2() {
    inputFile.open(R"(C:\Users\cfintern\Documents\AdventOfCode22\AoCDay10Input.txt)");
    int spritePosition = 1;
    for (int i = 0; i < 40; i++) {
        if (i == 0 || i == 1 || i == 2) {
            spriteArray[i] = '#';
        }
        else {
            spriteArray[i] = '.';
        }
    }

    for (int i = 0; i < 240; i += 40) {
        while (cycleCount < 40) {
            getline(inputFile, line);
            int spaceIndex = line.find(" ");
            string instruction = line.substr(0, spaceIndex);
            int number = -1;
            if (instruction == "noop") {
                if (spriteArray[cycleCount] == '#') {
                    cout << '#';
                }
                else {
                    cout << '.';
                }
                cycleCount++;
            }
            else {
                number = stoi(line.substr(spaceIndex + 1, line.length() - 1));
                for (int i =0; i < 2; i++) {
                    if (spriteArray[cycleCount] == '#') {
                        cout << '#';
                    }
                    else {
                        cout << '.';
                    }
                    cycleCount++;
                    if (i == 1) {
                        int newSpritePosition = spritePosition + number;
                        spriteArray[spritePosition - 1] = '.';
                        spriteArray[spritePosition + 1] = '.';
                        spriteArray[spritePosition] = '.';
                        spriteArray[newSpritePosition] = '#';
                        spriteArray[newSpritePosition + 1] = '#';
                        spriteArray[newSpritePosition - 1] = '#';
                        spritePosition = newSpritePosition;
                    }
                }
            }
        }
        cout << endl;
        cycleCount = 0;
    }

    inputFile.close();
}
