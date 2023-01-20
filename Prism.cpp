/*
 * Prism.cpp
 *
 *  Created on: Jan 13, 2023
 *      Author: Alicia Rogers
 */

#include "Prism.h"

Prism::Prism(float length, float width, float height) {
	this-> length = length;
	this-> width = width;
	this-> height = height;
}

float Prism::calcPrismVol() {
	volume = length * width * height;

	return volume;
}

