#pragma once

#include "IdCard.h"

#include <string>

using namespace std;

class Student
{
public:
    
    IdCard *iCard;

    //--.
    Student( string name, string last_name, IdCard *id );
    //--.
    void setIdCard(IdCard* c);
    IdCard getIdCard();
    

    //--. Setting the student name
    void set_name(string student_name);
    string get_name();
    //--. Setting the student's last name
    void set_last_name(string student_last_name);
    //--. Getting the student's last name
    string get_last_name();
    //--. Setting intermediate grades
    void set_scores(int student_scores[]);
    //--. Setting GPA
    void set_average_score(double ball);
    //--. Getting your GPA
    double get_average_score();


private:
    int scores[5];          // Interim assessments
    double average_score;   // GPA
    string name;            // Name
    string last_name;       // Last Name
};
