#include "Validations.h"
#include "MenuOptions.h"

float getAndValidateFloat()
{
    float input;

    cin >> input;

    // tests that input is positive and does not extend past too many decimal places for floats.
    // reference https://www.alphacodingskills.com/cpp/notes/cpp-cfenv-fe-overflow.php

    while (input <= 0.00 || !cin) {
        printAndClearError();
        cin >> input;
    }

    return input;
}

// reference https://cplusplus.com/forum/beginner/261201/#msg1131559
short int validateMenuOption() {
    short int input;
    while(true){
        if (std::cin >> input) { // if the user entered an integer
            return input;
        } else {
            printAndClearError(true);
        }
    }
}
