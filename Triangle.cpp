/*
 * Triangle.cpp
 *
 *  Created on: Jan 13, 2023
 *      Author: Alicia Rogers
 */

#include "Triangle.h"
#include <cfenv>

Triangle::Triangle(float sideA, float sideB) {
	this-> sideA = sideA;
	this-> sideB = sideB;
	hypotenuse = 0.0;
}

float Triangle::calcHyp() {

	hypotenuse = sqrt((sideA * sideA) + (sideB * sideB));

	if (fe_testexcept(FE_ALL_EXCEPT)) {

	}

	return hypotenuse;
}


