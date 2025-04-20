/*
    Exam Task01. Organizing data storage in a container.

    You need to write a program that will allow you to assign grades to students, indicating only the student's name.
    To organize the data, use the map container (the map container is a class in which all elements are stored as a key-value pair), 
    the key must be unique and used to access the associated pair: student name - key, grade (char type) - value.

*/

#include <iostream>
#include <map>
#include <string>

using namespace std;

//--.
struct StudentGrade
{
    string sFullName;
    char grade;

    StudentGrade(const string &n, char g) 
        : sFullName(n), grade(g)
    {}

    StudentGrade() : sFullName(""), grade(' ') {}
};


//---------------------------------------------
//--.
int main()
{

    
//    SetConsoleOutputCP(1251);
//    SetConsoleCP(1251);

    string studentName;
    char studentGrade;
    map<string, StudentGrade> studentMap;
    char key;

    
    do 
    {
        //--.
        cout << "Enter student full name: ";
        getline(cin, studentName);

        //--.
        std::cout << "Enter rating (2-5): ";
        std::cin >> studentGrade;

        
        //--.
        if( studentMap.find(studentName) != studentMap.end() ) 
        {
            cout << "Student assessment " << studentName << " has been replaced." << std::endl;
        }

        
        //--.
        studentMap[studentName] = StudentGrade(studentName, studentGrade);
        

        std::cout << "Do you want to add another student? (y/n): ";
        std::cin >> key;
        std::cin.ignore();

    } while( key == 'y' || key == 'Y' );

    
    //--.
    std::cout << "\nList of students and their grades:\n";
    //--.
    for( const auto &st : studentMap) 
    {
        cout << "Student: " << st.second.sFullName << " with grade: " << st.second.grade << std::endl;
    }
    
    return 0;
}
