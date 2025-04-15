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
    
    ~Time();

    //--.
    void setHours(int h);
    void setMinutes(int m);
    void setSeconds(int s);

    //--.
    string getTime();

    //--.
    int getHours();
    int getMinutes();
    int getSeconds();

    //--.
    bool isCorrectTime();
    //--.
    int toSeconds() const;
    //--.
    Time& add(const Time *in) const;
    //--.
    Time& subtract(const Time *in) const;
    
private:

    int hours;
    int minutes;
    int seconds;


};
