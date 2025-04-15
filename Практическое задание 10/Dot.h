#pragma once

class Dot
{

public:

	Dot();
	
	Dot(double x, double y);

	void setXY(double x, double y);

	double distanceTo( const Dot &point ) const;

private:
	double x;
	double y;

};
