/*
 * Main.cpp
 *
 *  Created on: Jan 13, 2023
 *      Author: Alicia Rogers
 */

#include <iostream>
#include <iomanip>
#include <string>
#include "Triangle.h"
#include "Trapezoid.h"
#include "Prism.h"
using namespace std;

void printAndClearError() {

	cout << "Input cannot be 0, negative, non-numeric, or out-of-range. Please enter a positive value." << endl;
	cin.clear(); // clears error state if the user entered a string or char. https://cplusplus.com/forum/general/207458/
	cin.ignore(); // clears the input causing error from stream. https://cplusplus.com/forum/general/207458/

}

char promptUserInput() {

	char userInput;

	// prompts user to enter command
	cout << "Please enter a command or X to exit the program" << endl;
	cin >> userInput;

	// converts input to uppercase letter
	userInput = toupper(userInput);

	return userInput;

}

int main(){
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

	while (userInput != 'X') {
		if (userInput == 'H') {
			float side1;
			float side2;
			float hypotenuse;

			// gets the length of side 1 from the user
			cout << "Please enter a value for side 1: " << endl;
			cin >> side1;

			// ensures that value entered is positive
			while (side1 <= 0.00 || side1 > 3.4e38) {
				printAndClearError();
				cin >> side1;
			}

			// gets the length of side 2 from the user
			cout << "Please enter a value for side 2: " << endl;
			cin >> side2;

			// ensures that value entered is positive
			while (side2 <= 0 || side2 > 3.4e38) {
				printAndClearError();
				cin >> side2;
			}

			// creates an instance of a triangle object
			Triangle triangle = Triangle(side1, side2);

			// calculates the hypotenuse of the triangle

			hypotenuse = triangle.calcHyp();

			// outputs the hypotenuse to the user
			cout << "The hypotenuse of the triangle with side lengths " << side1 << " and " << side2 << " is ";

			// rounds the volume to 2 decimal places
			cout << fixed << setprecision(2) << hypotenuse << endl;

			userInput = promptUserInput();
		}

		else if (userInput == 'T') {
			float base1;
			float base2;
			float height;
			float area;

			// gets the length of base 1 from the user
			cout << "Please enter a value for base 1: " << endl;
			cin >> base1;

			// ensures that value entered is positive
			while (base1 <= 0 || base1 > 3.4e38) {
				printAndClearError();
				cin >> base1;
			}

			// gets the length of base 2 from the user
			cout << "Please enter a value for base 2: " << endl;
			cin >> base2;

			// ensures that value entered is positive
			while (base2 <= 0 || base2 > 3.4e38) {
				printAndClearError();
				cin >> base2;
			}

			// gets the height from the user
			cout << "Please enter a value for the height: " << endl;
			cin >> height;

			// ensures that value entered is positive
			while (height <= 0 || height > 3.4e38) {
				printAndClearError();
				cin >> height;
			}

			// creates an instance of a trapezoid object
			Trapezoid trapezoid = Trapezoid(base1, base2, height);

			// calculates the area of the trapezoid
			area = trapezoid.calcTrapezoidArea();

			// outputs the result of the area for the user
			cout << "The area of the trapezoid with bases " << base1 << ", " << base2 << " and height " << height << " is ";

			// rounds the area to 2 decimal places
			cout << fixed << setprecision(2) << area << endl;


			userInput = promptUserInput();
		}

		else if (userInput == 'P') {
			float length;
			float width;
			float height;
			float volume;

			// gets the value of the length from the user
			cout << "Please enter a value for length: " << endl;
			cin >> length;

			// ensures that value entered is positive
			while (length <= 0 || length > 3.4e38) {
				printAndClearError();
				cin >> length;
			}

			// gets the value of the width from the user
			cout << "Please enter a value for width: " << endl;
			cin >> width;

			// ensures that value entered is positive
			while (width <= 0 || width > 3.4e38) {
				printAndClearError();
				cin >> width;
			}

			// gets the height from the user
			cout << "Please enter a value for the height: " << endl;
			cin >> height;

			// ensures that value entered is positive
			while (height <= 0 || height > 3.4e38) {
				printAndClearError();
				cin >> height;
			}

			// creates an instance of a prism object
			Prism prism = Prism(length, width, height);

			// calculates the volume of the prism
			volume = prism.calcPrismVol();

			// outputs the result of the volume for the user
			cout << "The volume of the prism with dimensions " << length << ", " << width << ", and " << height << " is ";

			// rounds the volume to 2 decimal places
			cout << fixed << setprecision(2) << volume << endl;

			userInput = promptUserInput();
		}

		else {
			cout << "Input is not a recognized command. Please enter X to exit, or H, T, or P." << endl;

			userInput = promptUserInput();
		}
	}

	cout << "Exiting program. Goodbye!" << endl;
	return 0;
}
