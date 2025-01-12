#include <iostream>
#include <cmath>
using namespace std;

double angleClock(int hour, int minutes)
{
    double hourHand = 
    double minuteHand = 
    return abs(hourHand-minuteHand);
}

int main()
{
    cout << angleClock(12, 30) << endl;
    cout << angleClock(3, 30) << endl;
    cout << angleClock(3, 15) << endl;
    return 0;
}