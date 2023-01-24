#include "MenuOptions.h"
#include "Validations.h"

void MenuOptions::printAndClearError(bool isMenu)
{
    if(isMenu){
        cout << "Input cannot negative, non-numeric, or out-of-range. Please enter a positive value." << endl;
    }
    else{
        cout << "Input cannot be 0, negative, non-numeric, or out-of-range. Please enter a positive value." << endl;
    }

    cin.clear();  // clears error state if the user entered a string or char.
	// reference: https://cplusplus.com/forum/general/207458/
    cin.ignore(1000, '\n'); // clears the input causing error from stream.
	// reference: https://cplusplus.com/forum/general/207458/
}

float MenuOptions::getAndValidateFloat()
{
    float input;

	cin >> input;

	// tests that input is positive and does not extend past too many decimal places for floats.
    // reference https://www.alphacodingskills.com/cpp/notes/cpp-cfenv-fe-overflow.php

	while (input <= 0.00 || (!std::cin)) {
		printAndClearError();
		cin >> input;
	}

    return input;
}

short int MenuOptions::promptUserInput()
{
    short int userInput;

    // prompts user to enter command
    cout << "Please enter a command or 0 to exit the program" << endl;
    userInput = Validations::validateMenuOption();

    return userInput;
}

void MenuOptions::promptAndCalculateTrapezoid()
{
    float base1;
    float base2;
    float height;
    float area;

    // gets the length of base 1 from the user
    cout << "Please enter a value for base 1: " << endl;

    // ensures that value entered is positive
    base1 = Validations::getAndValidateFloat();

    // gets the length of base 2 from the user
    cout << "Please enter a value for base 2: " << endl;

    // ensures that value entered is positive
    base2 = Validations::getAndValidateFloat();

    // gets the height from the user
    cout << "Please enter a value for the height: " << endl;

    // ensures that value entered is positive
    height = Validations::getAndValidateFloat();

    // creates an instance of a trapezoid object
    Trapezoid trapezoid = Trapezoid(base1, base2, height);

    // calculates the area of the trapezoid
    area = trapezoid.calcTrapezoidArea();

    // outputs the result of the area for the user
    cout << "The area of the trapezoid with bases " << base1 << ", " << base2 << " and height " << height << " is "
         << fixed << setprecision(2) << area << endl;
}

void MenuOptions::promptAndCalculateTriangle()
{
    float side1;
    float side2;
    float hypotenuse;

    // gets the length of side 1 from the user
    cout << "Please enter a value for side 1: " << endl;

    // ensures that value entered is positive
    side1 = Validations::getAndValidateFloat();

    // gets the length of side 2 from the user
    cout << "Please enter a value for side 2: " << endl;

    // ensures that value entered is positive
    side2 = Validations::getAndValidateFloat();

    // creates an instance of a triangle object
    Triangle triangle = Triangle(side1, side2);

    // calculates the hypotenuse of the triangle
    hypotenuse = triangle.calcHyp();

    // outputs the hypotenuse to the user
    cout << "The hypotenuse of the triangle with side lengths " << side1 << " and " << side2 << " is " << fixed
         << setprecision(2) << hypotenuse << endl;
}

void MenuOptions::promptAndCalculatePrism()
{
    float length;
    float width;
    float height;
    float volume;

    // gets the value of the length from the user
    cout << "Please enter a value for length: " << endl;

    // ensures that value entered is positive
    length = Validations::getAndValidateFloat();

    // gets the value of the width from the user
    cout << "Please enter a value for width: " << endl;

    // ensures that value entered is positive
    width = Validations::getAndValidateFloat();

    // gets the height from the user
    cout << "Please enter a value for the height: " << endl;

    // ensures that value entered is positive
    height = Validations::getAndValidateFloat();

    // creates an instance of a prism object
    Prism prism = Prism(length, width, height);

    // calculates the volume of the prism
    volume = prism.calcPrismVol();

    // outputs the result of the volume for the user
    cout << "The volume of the prism with dimensions " << length << ", " << width << ", and " << height << " is "
         << fixed << setprecision(2) << volume << endl;
}
