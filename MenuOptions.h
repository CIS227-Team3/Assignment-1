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
    short int promptUserInput();
    short int validateMenuOption();
    void promptAndCalculateTrapezoid();
    void promptAndCalculateTriangle();
    void promptAndCalculatePrism();

private:
    void printAndClearError(bool isMenu);
    float getAndValidateFloat();
};


#endif //ASSIGNMENT_1_MENUOPTIONS_H
