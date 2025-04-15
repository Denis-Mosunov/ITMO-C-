#pragma once


#include <string>
#include <iostream>


using namespace std;

//--.
enum errorStates
{
	NONE = 0,
	INCORRECT_TIME = 1,
	OTHER = 2
};


class ExErrors
{
public:
	
	string sMessage;
	int hours, minutes, seconds;
	int diff;
	errorStates currentState;
	
	//--.
	ExErrors(errorStates st, string mes, int h , int m, int s)
		: sMessage(mes), hours(h), minutes(m), seconds(s), currentState(st)
	{
	}
	//--.
	ExErrors(errorStates st, string mes, int dif )
		: sMessage(mes), diff(dif), currentState(st)
	{
	}

	//--.
	void printMessage() const
	{		
		switch( currentState )
		{
		case INCORRECT_TIME:
			cout << sMessage << " : hours = " << hours << ", minutes = " << minutes << ", seconds = " << seconds << "\n";
			break;
		case OTHER:
			cout << sMessage << " : diff = " << diff << "\n";
			break;
		}
	}
};
