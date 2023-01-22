#ifndef PRISM_H_
#define PRISM_H_

#include <cmath>
#include <cfenv>
#include <cfloat>
#include <iostream>

using namespace std;

class Prism {
public:
	Prism(float length, float width, float height);
	float calcPrismVol();

private:
	float length;
	float width;
	float height;
	float volume;
};

#endif /* PRISM_H_ */
