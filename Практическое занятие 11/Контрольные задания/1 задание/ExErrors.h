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
    Time time1, time2, time3, time4, time5;

    time1.setTime();
    time2.setTime();

    //--.
    time3 = time1 + time2;
    //
    time5 = time1 - time2;
    //--.
    time4 = time1 + time2 + time3;

    cout << "\ntime1 = " << time1;
    cout << "\ntime2 = " << time2;
    cout << "\ntime3 = time1 + time2 = " << time3;
    cout << "\ntime4 = time1 + time2 + time3 = " << time4;
    cout << "\ntime5 = time1 + time2  = " << time5;

    //time5 = time5 + 60.5;
    time5 = 60.5 + time5;

    cout << "\ntime5 = 60 + time5  = " << time5;

    //--.
    if( time5 > time1 )
    {
        cout << "\ntime5 > time1";
    }
    else
    {
        cout << "\ntime1 > time5";
    }


/*
    //--.
    Time sum = time1->add(time2);
    cout << "Amount of time: " << sum.getHours() << " h " << sum.getMinutes() << " min " << sum.getSeconds() << " sec\n";
    cout << "Amount of time: " << sum.getTime() << " \n";


    try
    {
        Time dif = time1->subtract(time2);
    }
    catch (ExErrors& error)
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
*/    

    //--.
    return 0;
}
