#include <iostream>
#include <string>
using namespace std;

string privet(string name) 
{
    string str = name + ", " + "hello!\n";
    return str;
}

int main() 
{
    cout << "What is your name?" << endl;
    string name;
    cin >> name;

    string nameOut = privet(name);

    cout << nameOut;

    return 0;
}

