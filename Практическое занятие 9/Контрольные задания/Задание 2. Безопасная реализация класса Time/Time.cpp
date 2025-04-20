#include "Time.h"

//----------------------------------------------
//--.
Time::Time()
    : hours(0), minutes(0), seconds(0)
{
}

//----------------------------------------------
//--.
Time::Time(int hours, int minutes, int seconds)
{    
    this->hours = hours;
    this->minutes = minutes;
    this->seconds = seconds;

    //--.
    if( isCorrectTime() )
    {
        //--.
        minutes = minutes + seconds / 60;
        hours = hours + minutes / 60;
        seconds %= 60;
        minutes %= 60;
    }
    else
    {
        throw ExErrors( INCORRECT_TIME, "Incorrect time", hours, minutes, seconds);
    }
}

//----------------------------------------------
//--.
void Time::setHours(int h)
{
    hours = h;
}

//----------------------------------------------
//--.
void Time::setMinutes(int m)
{
    minutes = m;
}

//----------------------------------------------
//--.
void Time::setSeconds(int s)
{
    seconds = s;
}


//----------------------------------------------
//--.
Time::~Time()
{
}

//----------------------------------------------
//--.
string Time::getTime()
{
    char buf[64];
    memset(buf, 0, 64);
    sprintf_s(buf, 64, "%02d:%02d:%02d", hours, minutes, seconds);
    return buf;
}

//----------------------------------------------
//--.
int Time::getHours()
{
    return hours;
}

//----------------------------------------------
//--.
int Time::getMinutes()
{
    return minutes;
}

//----------------------------------------------
//--.
int Time::getSeconds()
{
    return seconds;
}

//----------------------------------------------
//--.
bool Time::isCorrectTime()
{
    //--.
    if (hours < 0 || minutes < 0  || seconds < 0 )
    {
        return false;
    }
    return true;
}

//----------------------------------------------
//--.
int Time::toSeconds() const
{
    return seconds + minutes * 60 + hours * 3600;
}

//----------------------------------------------
//--.
Time& Time::add(const Time *in) const
{
    Time result;
    result.seconds = seconds + in->seconds;
    result.minutes = minutes + in->minutes + result.seconds / 60;
    result.hours = hours + in->hours + result.minutes / 60;

    result.seconds %= 60;
    result.minutes %= 60;
    return result;
}

//----------------------------------------------
//--.
Time& Time::subtract(const Time *in) const
{
    Time result;
    int totalSeconds1 = toSeconds();
    int totalSeconds2 = in->toSeconds();
    int diff = totalSeconds1 - totalSeconds2;

    if( diff < 0 )
    {
        //cout << "The result of subtraction is negative, return 0:00:00\n";
        throw ExErrors(OTHER, "The result of subtraction is negative ", diff);
    }

    result.hours = diff / 3600;
    diff %= 3600;
    result.minutes = diff / 60;
    result.seconds = diff % 60;

    return result;
}
