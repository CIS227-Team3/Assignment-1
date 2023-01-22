#include "Triangle.h"

Triangle::Triangle(float sideA, float sideB) {
	this-> sideA = sideA;
	this-> sideB = sideB;
	hypotenuse = 0.0;
}

float Triangle::calcHyp() {

	hypotenuse = sqrt(pow(sideA, 2) + pow(sideB, 2));

	// tests to see if any exceptions were thrown during the calculation
	if (fetestexcept(FE_OVERFLOW) || fetestexcept(FE_UNDERFLOW)) {
		hypotenuse = 0.0;
		cout << "Result is out of range" << endl;
		feclearexcept(FE_ALL_EXCEPT); // resets exception flags
		// reference https://www.alphacodingskills.com/cpp/notes/cpp-cfenv-fe-overflow.php
	}

	return hypotenuse;
}


