/*
 * Trapezoid.h
 *
 *  Created on: Jan 13, 2023
 *      Author: Alicia Rogers
 */

#ifndef TRAPEZOID_H_
#define TRAPEZOID_H_

class Trapezoid {
public:
	Trapezoid(float base1, float base2, float height);
	float calcTrapezoidArea();

private:
	float base1;
	float base2;
	float height;
	float area;
};

#endif /* TRAPEZOID_H_ */
