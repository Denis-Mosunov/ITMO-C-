#pragma once

#include <iostream> 
#include <string>

using namespace std;

class DivideByZeroError 
{ 
public: 
	DivideByZeroError() 
		: message("VVA err: Division by zero") 
	{ 
	} 

	//--.
	void printMessage() const 
	{ 
		cout << message << endl; 
	} 
	private: 
		string message; 
};
