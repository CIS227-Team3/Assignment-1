#ifndef ASSIGNMENT_1_MENUOPTIONS_H
#define ASSIGNMENT_1_MENUOPTIONS_H

#include <cmath>
#include <cfenv>
#include <cfloat>
#include <iomanip>
#include <iostream>
#include "Triangle.h"
#include "Trapezoid.h"
#include "Prism.h"

using namespace std;

short int promptUserInput();
void promptAndCalculateTrapezoid();
void promptAndCalculateTriangle();
void promptAndCalculatePrism();
void printAndClearError(bool isMenu = false);
float getAndValidateFloat();


#endif //ASSIGNMENT_1_MENUOPTIONS_H
