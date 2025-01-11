#include <iostream>
#include <cmath>
using namespace std;

double angleClock(int hour, int minutes)
{
    double hourHand = (hour%12 + minutes/60.0)*30;
    double minuteHand = ((60-minutes)%30)*6;
}

int main()
{
    //code;
    return 0;
}