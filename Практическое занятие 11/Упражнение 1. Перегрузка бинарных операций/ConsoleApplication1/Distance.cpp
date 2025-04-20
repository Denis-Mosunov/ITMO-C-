#include "Distance.h"

Distance Distance::operator+ ( const Distance& d2 ) const
{	
	//--.
	float inches_tmp = inches + d2.inches;
	//--.
	int feet_tmp = feet + d2.feet;
	
	//--.
	if( inches_tmp >= 12.0 )
	{
		inches_tmp -= 12.0;
		feet_tmp++;
	}

	//--.
	return Distance(feet_tmp, inches_tmp);
}	
	
//------------------------------------------------------------
//--.
Distance Distance::operator- ( const Distance &d2 ) const
{		
	//--.
	float totalInches1	= toInches();
	float totalInches2	= d2.toInches();
	float diff = totalInches1 - totalInches2;

	//--.
	if( diff < 0 )
	{
		cout << "The result of subtraction is negative, return 0'00\"\n";
		return { 0, 0 };
	}

	//--.
	return Distance( diff / 12, diff - diff / 12 * 12);
}	

//------------------------------------------------------------
//--.
std::ostream& operator<< (std::ostream& out, const Distance& dist)
{
	out << dist.feet << "\' - " << dist.inches << "\"\n";
	return out;
}
