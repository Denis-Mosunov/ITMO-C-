#pragma once

#include <iostream>
#include "Dot.h"

#include <tuple>
#include <vector>

#include "ExValidTriangle.h"

using namespace std;

class TriangleComposition {
public:
    
    //--.
    TriangleComposition(Dot a, Dot b, Dot c);
    //--.
    tuple<double, double, double> getSedeLength();
    //--.
    double getPerimetr();
    //--.
    double getSquare();
    //--.
    bool isValid();



private:
    Dot a, b, c; // Êîìïîçèöèÿ: òî÷êè ïðèíàäëåæàò òðåóãîëüíèêó
};
