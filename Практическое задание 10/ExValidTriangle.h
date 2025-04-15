#pragma once


#include <string>
#include <iostream>
#include "ExValidTriangle.h"

using namespace std;


class ExValidTriangle
{
public:
	
	string sMessage;
	double rLen1, rLen2, rLen3;
	

	ExValidTriangle( string mes, double in1 , double in2, double in3)
		: sMessage(mes), rLen1(in1), rLen2(in2), rLen3(in3)
	{
	}

	void printMessage() const
	{
		cout << "  Triangle side length error " << sMessage << " : len1 = " << rLen1 << ", len2 = " << rLen2 << ", len3 = " << rLen3 << "\n";
	}
};
