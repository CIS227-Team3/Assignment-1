/*
 * Prism.h
 *
 *  Created on: Jan 13, 2023
 *      Author: Alicia Rogers
 */

#ifndef PRISM_H_
#define PRISM_H_

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
