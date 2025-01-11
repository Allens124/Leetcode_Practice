#include <iostream>
#include <cmath>
using namespace std;

double angleClock(int hour, int minutes)
{
    double hourHand = hour < 6 ? (hour+minutes/60.0)*30 : ((12-hour)+minutes/60.0)*30;
    double minuteHand = minutes < 30 ? minutes*6 : (60-minutes)*6;
    return abs(hourHand-minuteHand);
}

int main()
{
    //code;
    return 0;
}