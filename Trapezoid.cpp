#include "Trapezoid.h"

Trapezoid::Trapezoid(float base1, float base2, float height) {
	this-> base1 = base1;
	this-> base2 = base2;
	this-> height = height;
	area = 0.0;
}

float Trapezoid::calcTrapezoidArea(){
	area = 0.5 * height * (base1 + base2);
	
	// checks that the calculation does not set a float exception flag
	if (fetestexcept(FE_OVERFLOW) || fetestexcept(FE_UNDERFLOW)) {
		area = 0.0;
		cout << "Result is out of range" << endl;
		feclearexcept(FE_ALL_EXCEPT); // resets exception flags
		// reference https://www.alphacodingskills.com/cpp/notes/cpp-cfenv-fe-overflow.php
	}
	
	return area;
}

