#include <iostream>
#include <string>
#include "MenuOptions.h"
//#include "MenuOptions.cpp"
#include "Validations.h"
//#include "validations.cpp"
#include "Triangle.h"
#include "Trapezoid.h"
#include "Prism.h"
//#include "Prism.cpp"
//#include "Trapezoid.cpp"
//#include "Triangle.cpp"
// Commented out for compiler differences

using namespace std;

int main()
{
    short int userInput;

    // runs main until userInput is 0 for 'exit'
    // userInput of 1 calculates the hypotenuse of a triangle
    // userInput of 2 calculates the area of a trapezoid
    // userInput of 3 calculates the volume of a prism
    cout << "0. Please enter 0 to exit the program." << endl;
    cout << "1. Please enter 1 to calculate the hypotenuse of a triangle." << endl;
    cout << "2. Please enter 2 to calculate the area of a trapezoid." << endl;
    cout << "3. Please enter 3 to calculate the volume of a prism." << endl;

    userInput = validateMenuOption();

    while (userInput != 0)
    {
        switch (userInput)
        {
            case 1:
                promptAndCalculateTriangle();
                break;
            case 2:
                promptAndCalculateTrapezoid();
                break;
            case 3:
                promptAndCalculatePrism();
                break;
            default:
                cout << "Input is not a recognized command. Please enter 0 to exit, or 1, 2, or 3." << endl;
                break;
        }

        userInput = promptUserInput();
    }

    cout << "Exiting program. Goodbye!" << endl;
    return 0;
}
