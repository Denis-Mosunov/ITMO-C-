#include "Distance.h"



Distance funcSum(const Distance &in, int feet, float inches)
{
	//--.
	float inches_tmp = inches + in.getInches();
	//--.
	int feet_tmp = feet + in.getFeet();

	//--.
	if (inches_tmp >= 12.0)
	{
		inches_tmp -= 12.0;
		feet_tmp++;
	}

	//--.
	return Distance(feet_tmp, inches_tmp);
}

//------------------------------------------------------------
//--.
Distance Distance::operator+ ( const Distance& d2 ) const
{	
	return funcSum(d2, feet, inches);
}	



//------------------------------------------------------------
//- (Distance + float)
Distance Distance::operator+(double value) const 
{
	Distance d2( value );
	return funcSum(d2, feet, inches);
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
	return Distance( (int) (diff / 12), (float) (diff - diff / 12 * 12));
}	

//------------------------------------------------------------
//--.
std::ostream& operator<< (std::ostream& out, const Distance& dist)
{
	out << dist.feet << "\' - " << dist.inches << "\"\n";
	return out;
}
