#include "TriangleComposition.h"

//---------------------------------------------------
//--.
TriangleComposition::TriangleComposition(Dot a, Dot b, Dot c)
    : a(a), b(b), c(c) 
{
    if( !isValid() )
    {
        auto resSlen = getSedeLength();
        throw ExValidTriangle("in the new Triangle() method", get<0>(resSlen), get<1>(resSlen), get<2>(resSlen));
    }
}

//---------------------------------------------------
//--.
tuple<double, double, double> TriangleComposition::getSedeLength()
{
    //--.
    double sideLen1 = a.distanceTo(b);
    double sideLen2 = b.distanceTo(c);
    double sideLen3 = c.distanceTo(a);
    //--.
    return make_tuple(sideLen1, sideLen2, sideLen3);
}

//---------------------------------------------------
//--.
double TriangleComposition::getPerimetr()
{
    auto resSlen = getSedeLength();
    return get<0>(resSlen) + get<1>(resSlen) + get<2>(resSlen);
}

//---------------------------------------------------
//--.
double TriangleComposition::getSquare()
{
    auto resSlen = getSedeLength();
    double rA = get<0>(resSlen);
    double rB = get<1>(resSlen);
    double rC = get<2>(resSlen);
    //--. semiperimeter
    double p = (rA + rB + rC) / 2;
    //--.
    return sqrt(p * (p - rA) * (p - rB) * (p - rC));
}

//---------------------------------------------------
//--.
bool TriangleComposition::isValid()
{
    //--.
    auto resSlen = getSedeLength();
    double side1Len = get<0>(resSlen);
    double side2Len = get<1>(resSlen);
    double side3Len = get<2>(resSlen);

    if ((side1Len + side2Len) <= side3Len ||
        (side2Len + side3Len) <= side1Len ||
        (side3Len + side1Len) <= side2Len)
        return false;

    return true;
}
