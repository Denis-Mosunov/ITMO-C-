#include <iostream>
#include <string>

#include "Student.h"

using namespace std;


//--------------------------------------
//--.
int main()
{   
    //--.
    IdCard idc( 123, "Base" );
    string name;
    string last_name;

    //--. Creating a Student class object
    Student* student02 = new Student(name, last_name, &idc);

    //--.
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

    //--. Saving first and last name to a Student object
    student02->set_name(name);
    student02->set_last_name(last_name);
    //--. Saving intermediate grades to an object of the Student class
    student02->set_scores(scores);

    double average_score = sum / 5.0;

    //--. Saving GPA to Student class object
    student02->set_average_score(average_score);

    cout << "Average ball for " << student02->get_name() << " "
        << student02->get_last_name() << " is "
        << student02->get_average_score() << endl;

    cout << "IdCard: " << student02->getIdCard().getNumber() << endl;
    cout << "Category: " << student02->getIdCard().getCategory() << endl;

    //--.
    delete student02;
    //--.
    return 0;
}
