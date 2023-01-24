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

class MenuOptions {
public:
    static short int promptUserInput();
    static void promptAndCalculateTrapezoid();
    static void promptAndCalculateTriangle();
    static void promptAndCalculatePrism();
    static void printAndClearError(bool isMenu = false);

private:
    static float getAndValidateFloat();
};


#endif //ASSIGNMENT_1_MENUOPTIONS_H
