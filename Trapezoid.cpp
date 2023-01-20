/*
 * Trapezoid.cpp
 *
 *  Created on: Jan 13, 2023
 *      Author: Alicia Rogers
 */

#include "Trapezoid.h"

Trapezoid::Trapezoid(float base1, float base2, float height) {
	this-> base1 = base1;
	this-> base2 = base2;
	this-> height = height;
}

float Trapezoid::calcTrapezoidArea(){
	area = 0.5 * height * (base1 + base2);

	return area;
}

