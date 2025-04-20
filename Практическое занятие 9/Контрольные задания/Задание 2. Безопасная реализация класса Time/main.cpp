#include <iostream>
#include <string>
#include <tuple>
#include <vector>

#include "Time.h"

using namespace std;


//-------------------------------
//--.
int main()
{
    Time* time1(NULL), *time2(NULL);
    int tmpH, tmpM, tmpS;

    //--.
    cout << "Enter time (hours, minutes, seconds):";
    cin >> tmpH >> tmpM >> tmpS;


    try
    {
        time1 = new Time(tmpH, tmpM, tmpS);
    }
    catch (ExErrors &error)
    {
        cout << "ERROR: ";
        error.printMessage();
        //--.
        if( time1 )
        {
            delete time1;
            time1 = NULL;
        }
        //--.
        return 1;
    }
    //--. 
    cout << "Total number of seconds: " << time1->toSeconds() << " seconds\n\n";


    //--.
    cout << "Enter the second time (hours, minutes, seconds): ";
    cin >> tmpH >> tmpM >> tmpS;

    try
    {
        time2 = new Time(tmpH, tmpM, tmpS);
    }
    catch( ExErrors &error )
    {
        cout << "ERROR: ";
        error.printMessage();
        //--.
        if (time1)
        {
            delete time1;
            time1 = NULL;
        }
        //--.
        if (time2)
        {
            delete time2;
            time2 = NULL;
        }
        //--.
        return 1;
    }
    //--. 
    cout << "Total number of seconds: " << time2->toSeconds() << " seconds\n\n";



    //--.
    Time sum = time1->add( time2 );
    cout << "Amount of time: " << sum.getHours() << " h " << sum.getMinutes() << " min " << sum.getSeconds() << " sec\n";
    cout << "Amount of time: " << sum.getTime() << " \n";


    try
    {
        Time dif = time1->subtract(time2);
    }
    catch( ExErrors& error )
    {
        cout << "Subtract operation ERROR: ";
        error.printMessage();

        delete time1;
        delete time2;

        return 1;
    }
    
    cout << "Amount of time: " << sum.getHours() << " h " << sum.getMinutes() << " min " << sum.getSeconds() << " sec\n";
    cout << "Amount of time: " << sum.getTime() << " \n";


    //--.
    delete time1;
    delete time2;

    //--.
    return 0;
}
