#include <iostream>
#include "DivideByZeroError.h"

float quotient( int numl, int num2 ) 
{ 
    if( num2 == 0 ) 
        throw DivideByZeroError(); 
        
    return (float) numl / num2; 
}
    
//--.
int main()
{   
    int number1, number2;

    //--.
    cout << "Enter two integers to calculate their quotient:\n"; 
    cin >> number1; 
    cin >> number2; 
    
    //--.
    try
    {   
        //--.
        float result = quotient( number1, number2 );
        //--.
        cout << "The result of division is " << result << endl;
    }   
    catch( DivideByZeroError& error) 
    {   
        cout << "ERROR: "; 
        
        error.printMessage(); 
        
        return 1; // program termination on error 
    }   
    
    //--.
    return 0; // normal program termination    
}   
