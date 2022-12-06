#include "AoCDay1.h"
#include "AoCDay2.h"
#include "AoCDay3.h"
#include "AoCDay4.h"
#include "AoCDay5.h"
#include <iostream>

// UPDATE THE DAMN PATHS SO IT'S NOT THE FULL FILE PATH YOU IDIOT

int main() {
    AoCDay5 obj;
    std::string answer1, answer2;
    answer1 = obj.Q1();
    answer2 = obj.Q2();
    std::cout << answer1 << std::endl << answer2;
    return 0;
}
