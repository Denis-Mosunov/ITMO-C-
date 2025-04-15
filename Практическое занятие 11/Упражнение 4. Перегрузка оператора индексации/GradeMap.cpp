#include "GradeMap.h"

char& GradeMap::operator[](const string& name)
{	
	//--. student's name in the vector?
	for( auto& ref : m_map )
	{
		//--. If found, we return a link to its assessment
		if( ref.name == name )
			return ref.grade;
	}

	//--. Not found - create a new StudentGrade for a new student
	StudentGrade temp{ name, ' ' };

	//--. Place it at the end of the vector
	m_map.push_back( temp );

	//--. And we return a link to its rating
	return m_map.back().grade;
}
