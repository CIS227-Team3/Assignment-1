#ifndef TRIANGLE_H_
#define TRIANGLE_H_

#include <cmath>
#include <cfenv>
#include <cfloat>
#include <iostream>

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
