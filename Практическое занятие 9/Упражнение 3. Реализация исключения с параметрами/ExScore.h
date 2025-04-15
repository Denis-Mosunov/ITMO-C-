#pragma once


#include <string>

using namespace std;


class ExScore //exception class
{
public:
	string sOrigin;		//for function name
	int iPosition;
	int iValue;			//to store an erroneous value

	ExScore( string or_in , int pos_in, int sc_in)
	{
		sOrigin = or_in;		//line with the name of the error culprit
		iPosition = pos_in;
		iValue = sc_in;			//stored incorrect value
	}
};
