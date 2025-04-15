#include <iostream>
#include "Student.h"


//---------------------------------------------------------
//--.
int main()
{
    //--. Creating a Student class object

    string name;
    string last_name;
    string second_name = "";

    //--. Entering a name using the keyboard
    cout << "Name: ";
    getline(cin, name);
    //--. Entering a last name
    cout << "Last name: ";
    getline(cin, last_name);


    //--.
    vector<int> scores;
    int tmp;
    //--.
    for (int i = 0; i < 5; ++i)
    {
        cout << "Score " << i + 1 << ": ";
        cin >> tmp;
        scores.push_back(tmp);
    }

    //--.
    student student01(last_name, name, second_name, scores);
    double average_score = student01.get_average_score();
    //--.
    cout << "Average scores for " << student01.get_full_name() << " " << " is " << average_score << endl;
    //--.
    return 0;
}
