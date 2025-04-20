#pragma once

#include <string>
using namespace std;

#include "ExValidTriangle.h"


//--.
class Triangle
{	
public:
	//--.
	Triangle( double len1, double len2, double len3 );	
	//--.	
	double Square();
	//--.
	bool isValid();

private:

	double rLen1, rLen2, rLen3;


};
