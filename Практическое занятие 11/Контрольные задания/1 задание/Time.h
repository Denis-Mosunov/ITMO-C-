#pragma once

#include <string>
#include <iostream>
#include "ExErrors.h"

using namespace std;

class Time
{   
public:

    Time();
    Time(int hour, int minutes, int seconds);
    Time(int totalSeconds);



    ~Time();

    //--.
    void setHours(int h);
    void setMinutes(int m);
    void setSeconds(int s);

    //--.
    string getTime() const;

    //--.
    int getHours() const;
    int getMinutes() const ;
    int getSeconds() const ;

    //--.
    bool isCorrectTime();
    //--.
    int toSeconds() const;

    //--.
    void setTime();

    //--.
    Time operator+ (const Time&) const;
    Time operator- (const Time&) const;
    Time operator+(int value) const;
    Time operator+(double value) const;
    bool operator>(const Time& in) const;

    //--.
    friend ostream& operator<< (ostream& out, const Time& dist);

    //--.
    operator int() const
    {
        return seconds + minutes * 60 + hours * 3600;
    }

private:
    void saveTime(int hours, int minutes, int seconds);


    int hours;
    int minutes;
    int seconds;


};  
