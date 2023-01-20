/*
 * Triangle.h
 *
 *  Created on: Jan 13, 2023
 *      Author: Alicia Rogers
 */

#ifndef TRIANGLE_H_
#define TRIANGLE_H_

#include <cmath>

class Triangle {
public:
	Triangle(float sideA, float sideB);
	float calcHyp();
private:
	float hypotenuse;
	float sideA;
	float sideB;
};

#endif /* TRIANGLE_H_ */
