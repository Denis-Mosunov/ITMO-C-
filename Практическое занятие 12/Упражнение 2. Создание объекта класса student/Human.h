#pragma once

#include <string>
#include <sstream>

using namespace std;

class human 
{
public:
	
	//--.
	human( string last_name, string name, string second_name )
	{
		this->last_name		= last_name;
		this->name			= name;
		this->second_name	= second_name;
	}
	
	//--. Obtaining a person's full name
	std::string get_full_name()
	{
		std::ostringstream full_name;
		full_name << this->last_name << " "
			<< this->name << " "
			<< this->second_name;
		return full_name.str();
	}

private:
	string name;			
	string last_name;		
	string second_name;	
};
