#include "Triangle.h"

Triangle::Triangle( double len1, double len2, double len3 )
{
	rLen1 = len1;
	rLen2 = len2;
	rLen3 = len3;

	//--.
	if( !isValid() )
		throw ExValidTriangle("in the new Triangle() method", len1, len2, len3);
}

//-------------------------------------------
//--.
double Triangle::Square()
{
	double p = (rLen1+ rLen2+ rLen3) / 2; //semiperimeter

	//cout << p << "\n" << rLen;

	double t = p * (p - rLen1) * (p - rLen2) * (p - rLen3);

	//cout << t << "\n";

	double res = sqrt(t);

	//cout << res << "\n";

	return res;
}

//-------------------------------------------
//--.
bool Triangle::isValid()
{
	if ((rLen1 + rLen2) <= rLen3 ||
		(rLen2 + rLen3) <= rLen1 ||
		(rLen3 + rLen1) <= rLen2)
		return false;

	return true;
}
