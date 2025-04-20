#pragma once
	
using namespace std;
#include <iostream>

class Distance
{	
private:
	int feet;
	float inches;
	
public:
	
	//--. default constructor
	Distance() 
		: feet(0), inches(0.0) 
	{ }

	//--. constructor with two parameters
	Distance(int ft, float in) 
	{	
		//--.
		setValues(ft, in);
	}	
	
	//--.
	void setValues(int ft, float in)
	{	
		//--.
		feet = ft;
		//--.
		inches = in;
		//--.
		if( inches >= 12.0 )
		{
			inches -= 12.0;
			feet++;
		}
	}	
		
	//--.
	void getdist()
	{	
		cout << "\nEnter number of feet : ";
		cin >> feet;
		cout << "Enter number of inches : ";
		cin >> inches;

		//--.
		setValues(feet, inches);
	}	
		
	//--.
	void showdist()
	{	
		cout << feet <<  "\' - " << inches << "\"";
	}	

	//--.
	float toInches() const
	{
		return inches + feet * 12;
	}
	
	//--.
	Distance operator+ ( const Distance& ) const;
	//--.
	Distance operator- (const Distance& d2) const;

	//--.
	friend std::ostream& operator<< (std::ostream& out, const Distance& dist);

};	
