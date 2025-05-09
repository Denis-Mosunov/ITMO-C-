#include "Dot.h"

#include <math.h>

//-------------------------------------
//--.
Dot::Dot()
{
	x = 0; y = 0;
}

//-------------------------------------
//--.
Dot::Dot(double x, double y)
{
	this->x = x;
	this->y = y;
}

//-------------------------------------
//--.
void Dot::setXY(double x, double y)
{
	this->x = x;
	this->y = y;
}

//-------------------------------------
//--.
double Dot::distanceTo( const Dot &point ) const
{	
	return sqrt(  pow(point.x - x, 2) + pow( point.y - y, 2 )  );
}
