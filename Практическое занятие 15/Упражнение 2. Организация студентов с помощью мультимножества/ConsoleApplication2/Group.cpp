


#include "Group.h"


#include <iostream>
#include <string>
#include <Windows.h>
#include "Student.h"


using namespace std;

//--------------------------------------------------
//--.
Group::Group(string name)
{
	this->name = name;
}

//--------------------------------------------------
//--.
Group::Group()
{
	name = "�� ����������";
}

//--------------------------------------------------
//--.
void Group::setName(string newName)
{
	name = newName;
}

//--------------------------------------------------
//--.
string Group::getName()
{
	return name;
}

//--------------------------------------------------
//--.
int Group::getSize()
{
	return (int) masSt.size();
}

//--------------------------------------------------
//--.
void Group::addStudent(Student* newStudent)
{
	masSt.insert(newStudent);
}
//--------------------------------------------------
//--.
void Group::delStudent(Student* oldStudent)
{
	masSt.erase(oldStudent);
}

//--------------------------------------------------
//--.
void Group::GroupOut()
{
	iter = masSt.begin();
	while (iter != masSt.end())
		(*iter++)->display();
}

//--------------------------------------------------
//--.
Student* Group::findStudent( string searchName, string searchLastName )
{	
	Student* temp = new Student(searchName, searchLastName);
	iter = masSt.lower_bound(temp);
	delete temp;
	return (*iter);
}	




