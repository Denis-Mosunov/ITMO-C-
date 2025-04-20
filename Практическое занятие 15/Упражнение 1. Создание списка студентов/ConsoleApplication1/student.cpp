#include <iostream>
#include <string>
#include "student.h"
#include "Group.h"
using namespace std;

//-------------------------------
//--.
Student::Student(string name, string last_name, IdCard *id)
{
    Student::set_name(name);
    Student::set_last_name(last_name);
	Student::setIdCard(id);
	Student::set_average_score(0);
}

//-------------------------------
//--.
Student::Student(string name, string last_name)
{
    Student::set_name(name);
    Student::set_last_name(last_name);
    Student::set_average_score(0);
}

//-------------------------------
//--.
void Student::set_name(std::string student_name)
{
    Student::name = student_name;
}

//-------------------------------
//--.
std::string Student::get_name()
{
    return Student::name;
}

//-------------------------------
//--.
void Student::set_last_name(std::string student_last_name)
{
    Student::last_name = student_last_name;
}

//-------------------------------
//--.
std::string Student::get_last_name()
{
    return Student::last_name;
}

//-------------------------------
//--.
void Student::set_scores(int scores[])
{
    for (int i = 0; i < 5; ++i) {
        Student::scores[i] = scores[i];
    }
}

//-------------------------------
//--.
void Student::set_average_score(double ball)
{
    Student::average_score = ball;
}

//-------------------------------
//--.
double Student::get_average_score()
{
    return Student::average_score;
}

//-------------------------------
//--.
void Student::setIdCard(IdCard *c)
{
    iCard = c;
}

//-------------------------------
//--.
IdCard Student::getIdCard()
{
    return *iCard;
}

//-------------------------------
//--.
void Student::display() const
{
	 cout << last_name << " " << name << "\t" << average_score << "\t" << iCard->getNumber()<< "\t" << iCard->getCategory() << endl;
}


