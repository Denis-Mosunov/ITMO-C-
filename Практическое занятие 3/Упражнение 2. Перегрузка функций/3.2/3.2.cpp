#include <iostream>
#include <string>
using namespace std;

string privet(string name)
{
    string str = name + ", " + "hello!\n";
    return str;
}

void privet(string name, int k)
{
    cout << name << ", " << "hello! " << "you input " << k << endl;
}

int main()
{
    int k;
    cout << "Input number:" << endl;
    cin >> k;

    cout << "What is your name?" << endl;
    string name;
    cin >> name;

    string nameOut = privet(name);

    cout << nameOut;

    return 0;

    privet(name);
    privet(name, k);
}