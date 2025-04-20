#include <iostream>
#include "Triangle.h"


using namespace std;

//--.
int main()
{
    double rLen1, rLen2, rLen3;
    Triangle* tr = NULL;

    //--.
    cout << "Enter the value of the three sides of the triangle:\n";
    cin >> rLen1;
    cin >> rLen2;
    cin >> rLen3;

    //--.
    try
    {
        tr = new Triangle(rLen1, rLen2, rLen3);
    }
    catch( ExValidTriangle &error )
    {
        cout << "ERROR: ";
        error.printMessage();
        //--.
        if (tr)
        {
            delete tr;
            tr = NULL;
        }
        //--.
        return 1;  
    }
    
    //--.
    double rSquare = tr->Square();
    //--.
    cout << "The result  is " << rSquare << endl;
    cout << "\n\n";
    //--.
    if (tr)
    {
        delete tr;
        tr = NULL;
    }
    //--.
    return 0; // normal program termination    
}
