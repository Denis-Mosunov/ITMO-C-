#pragma once
	
using namespace std;
#include <iostream>


class Distance
{	
private:
	//const float MTF;
	float MTF;
	
	
	int feet;
	float inches;
	
public:
	
	//--. default constructor
	Distance() 
		: feet(0), inches(0.0), MTF(3.280833F)
	{ }

	//--. constructor with two parameters
	Distance(int ft, float in) 
		: MTF(3.280833F)
	{	
		//--.
		setValues(ft, in);
	}

	//--.
	Distance( float meters ) 
		: MTF(3.280833F)
	{
		float rFeet = MTF * meters;		// ïåðåâîä â ôóòû
		feet = int (rFeet);				// ÷èñëî ïîëíûõ ôóòîâ
		inches = 12 * ( rFeet - feet );	// îñòàòîê - ýòî äþéìû
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
	void showdist() const
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
	operator float() const
	{
		float fracfeet = inches / 12;
		fracfeet += static_cast<float>(feet);
		return fracfeet / MTF;
	}
	
	//--.
	friend std::ostream& operator<< (std::ostream& out, const Distance& dist);

};	
