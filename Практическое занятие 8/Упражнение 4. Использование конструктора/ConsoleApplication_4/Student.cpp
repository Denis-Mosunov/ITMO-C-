#include "Student.h"

Student::Student(string name, string last_name)
{
    Student::set_name(name);
    Student::set_last_name(last_name);
}
//--. Setting the student name
void Student::set_name(string student_name)
{
    name = student_name;
}

//--.
string Student::get_name()
{
    return name;
}

//--. Setting the student's last name
void Student::set_last_name(string student_last_name)
{
    last_name = student_last_name;
}

//--. Getting the student's last name
string Student::get_last_name()
{
    return last_name;
}

//--. Setting intermediate grades
void Student::set_scores(int student_scores[])
{
    for (int i = 0; i < 5; ++i)
    {
        scores[i] = student_scores[i];
    }
}

//--. Setting GPA
void Student::set_average_score(double ball)
{
    average_score = ball;
}

//--. Getting your GPA
double Student::get_average_score()
{
    return average_score;
}
