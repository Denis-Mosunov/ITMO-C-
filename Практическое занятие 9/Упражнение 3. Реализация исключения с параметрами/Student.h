#pragma once

#include <iostream>
#include <string>

#include "ExScore.h"

using namespace std;

//--------------------------------------
//--.
class Student
{

public:

    //--. Setting the student name
    void set_name(string student_name)
    {
        name = student_name;
    }

    //--.
    string get_name()
    {
        return name;
    }

    //--. Setting the student's last name
    void set_last_name(string student_last_name)
    {
        last_name = student_last_name;
    }

    //--. Getting the student's last name
    string get_last_name()
    {
        return last_name;
    }

    //--. Setting intermediate grades
    void set_scores(int student_scores[])
    {
        //--.
        for( int i = 0; i < 5; ++i )
        {
            //--.
            if( student_scores[i] > 5 )
                throw ExScore( "in the set_scores() function", i+1, student_scores[i] );
            
            //--.
            scores[i] = student_scores[i];
        }
    }

    //--. Setting GPA
    void set_average_score(double ball)
    {
        average_score = ball;
    }

    //--. Getting your GPA
    double get_average_score()
    {
        return average_score;
    }

private:
    int scores[5];          // Interim assessments
    double average_score;   // GPA
    string name;            // Name
    string last_name;       // Last Name
};
