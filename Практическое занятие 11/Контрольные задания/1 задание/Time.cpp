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
    //--.
    saveTime( hours, minutes, seconds );
}   
    
//----------------------------------------------
//--.
Time::Time( int totalSeconds )
{   
    hours = totalSeconds / 3600;
    totalSeconds %= 3600;
    minutes = totalSeconds / 60;
    seconds = totalSeconds % 60;
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
string Time::getTime() const
{
    char buf[64];
    memset(buf, 0, 64);
    sprintf_s(buf, 64, "%02d:%02d:%02d", hours, minutes, seconds);
    return buf;
}

//----------------------------------------------
//--.
int Time::getHours() const
{
    return hours;
}

//----------------------------------------------
//--.
int Time::getMinutes() const
{
    return minutes;
}

//----------------------------------------------
//--.
int Time::getSeconds() const
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
    
//-------------------------------------------------------
//--.
void Time::saveTime( int hours, int minutes, int seconds )
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
        throw ExErrors( INCORRECT_TIME, "Incorrect time", hours, minutes, seconds );
    }
}

//-------------------------------------------------------
//--.
void Time::setTime()
{   
    int tmpH, tmpM, tmpS;

    cout << "Enter time (hours, minutes, seconds):";
    cin >> tmpH >> tmpM >> tmpS;

    //--.
    saveTime( tmpH, tmpM, tmpS );
}   
    

Time funcSum(const Time &in, int hour, int minutes, int seconds)
{
    int res_seconds = seconds + in.getSeconds();
    int res_minutes = minutes + in.getMinutes() + res_seconds / 60;
    int res_hours = hour + in.getHours() + res_minutes / 60;
    res_seconds %= 60;
    res_minutes %= 60;
    return Time(res_hours, res_minutes, res_seconds);
}


//-------------------------------------------------------
//--.
Time Time::operator+ (const Time& d2) const
{
    return funcSum( d2, hours, minutes, seconds );
}


//-------------------------------------------------------
//--.
Time Time::operator- ( const Time &in ) const
{
    Time result;
    int totalSeconds1 = toSeconds();
    int totalSeconds2 = in.toSeconds();
    int diff = totalSeconds1 - totalSeconds2;

    if( diff < 0 )
    {
        //cout << "The result of subtraction is negative, return 0:00:00\n";
        cout << "The result of subtraction is negative, return 0'00\"\n";
        //throw ExErrors(OTHER, "The result of subtraction is negative ", diff);
        return { 0, 0, 0 };
    }

    result.hours = diff / 3600;
    diff %= 3600;
    result.minutes = diff / 60;
    result.seconds = diff % 60;

    return result;
}
    
//------------------------------------------------------------
//--. (Time + int)
Time Time::operator+(int value) const
{   
    Time d2(value);
    return funcSum( d2, hours, minutes, seconds );
}   
    
//------------------------------------------------------------
//--. (Time + float)
Time Time::operator+(double value) const
{   
    Time d2((int)value);
    return funcSum(d2, hours, minutes, seconds);
}   
    
//------------------------------------------------------------
//--.
bool Time::operator>( const Time& in ) const
{    
    return toSeconds() > in.toSeconds() ? true : false;
}   
    
//------------------------------------------------------------
//--.
std::ostream& operator<<(std::ostream& out, const Time& t)
{   
    out << "Total number of seconds: " << t.toSeconds() << " seconds\n\n";
    //out << "Amount of time: " << t.getHours() << " h " << t.getMinutes() << " min " << t.getSeconds() << " sec\n";
    out << "Amount of time: " << t.getTime() << " \n";
    return out;
}   
