#include <iostream>
#include <string>
#include <tuple>
#include <vector>

#include "Student.h"

using namespace std;

//--------------------------------------
//--.
int main()
{
    //--. Creating a Student class object
    Student student01;

    string name;
    string last_name;

    int scores[5];

    //--. Entering a name using the keyboard
    cout << "Name: ";
    getline(cin, name);
    //--. Entering a last name
    cout << "Last name: ";
    getline(cin, last_name);


    //--. Sum of all ratings
    int sum = 0;
    //--. Entering interim grades
    for (int i = 0; i < 5; ++i)
    {
        cout << "Score " << i + 1 << ": ";
        cin >> scores[i];
        // summation
        sum += scores[i];
    }

    //--.
    try
    {
        //--. Saving first and last name to a Student object
        student01.set_name(name);
        student01.set_last_name(last_name);
        //--. Saving intermediate grades to an object of the Student class
        student01.set_scores(scores);
    }
    catch( ExScore& ex )
    {
        cout << "\nInitialization error " << ex.sOrigin << ": in position " << ex.iPosition << " with rating value " << ex.iValue << " is invalid\n";
    }



    double average_score = sum / 5.0;

    //--. Saving GPA to Student class object
    student01.set_average_score(average_score);

    cout << "Average ball for " << student01.get_name() << " "
        << student01.get_last_name() << " is "
        << student01.get_average_score() << endl;

    //--.
    return 0;
}
