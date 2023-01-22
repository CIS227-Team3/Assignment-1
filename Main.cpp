#include <iostream>
#include <string>
#include "MenuOptions.h"

using namespace std;

MenuOptions options;

int main()
{
    char userInput;

    // runs main until userInput is x for 'exit'
    // userInput of 'h' or 'H' calculates the hypotenuse of a triangle
    // userInput of 't' or 'T' calculates the area of a trapezoid
    // userInput of 'p' or 'P' calculates the volume of a prism
    cout << "Please enter X to exit the program." << endl;
    cout << "Please enter H to calculate the hypotenuse of a triangle." << endl;
    cout << "Please enter T to calculate the area of a trapezoid." << endl;
    cout << "Please enter P to calculate the volume of a prism." << endl;

    cin >> userInput;

    userInput = toupper(userInput);

    while (userInput != 'X')
    {
        switch (userInput)
        {
            case 'H':
                options.promptAndCalculateTriangle();
                break;
            case 'T':
                options.promptAndCalculateTrapezoid();
                break;
            case 'P':
                options.promptAndCalculatePrism();
                break;
            default:
                cout << "Input is not a recognized command. Please enter X to exit, or H, T, or P." << endl;
                break;
        }

        userInput = options.promptUserInput();
    }

    cout << "Exiting program. Goodbye!" << endl;
    return 0;
}
