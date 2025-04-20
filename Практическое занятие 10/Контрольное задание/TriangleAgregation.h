#pragma once

#include <iostream>
#include "Dot.h"

#include <tuple>
#include <vector>

#include "ExValidTriangle.h"

using namespace std;


class TriangleAgregation {

public:
    //--.
    TriangleAgregation(Dot& a, Dot& b, Dot& c);
    //--.
    tuple<double, double, double> getSedeLength();
    //--.
    double getPerimetr();
    //--.
    double getSquare();
    //--.
    bool isValid();
    
private:
    const Dot &a, &b, &c; 
};
