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
    MenuOptions();
    char promptUserInput();
    void promptAndCalculateTrapezoid();
    void promptAndCalculateTriangle();
    void promptAndCalculatePrism();

private:
    float input;
    void printAndClearError();
    float validateFloat(float input);
};


#endif //ASSIGNMENT_1_MENUOPTIONS_H
