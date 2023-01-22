#include "Prism.h"

Prism::Prism(float length, float width, float height) {
	this-> length = length;
	this-> width = width;
	this-> height = height;
	volume = 0.0;
}

float Prism::calcPrismVol() {
	volume = length * width * height;

	// tests to see if volume calculation causes float exception
	if (fetestexcept(FE_OVERFLOW) || fetestexcept(FE_UNDERFLOW)) {
		volume = 0.0;
		cout << "Result is out of range" << endl;
		feclearexcept(FE_ALL_EXCEPT); // resets exception flags
		// reference https://www.alphacodingskills.com/cpp/notes/cpp-cfenv-fe-overflow.php
	}
	
	return volume;
}

