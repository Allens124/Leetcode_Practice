#include <iostream>
#include <cmath>
using namespace std;

double angleClock(int hour, int minutes)
{
    double hourDegree = (hour%12+minutes/60.0)*30;
    double minuteDegree = minutes*6.0;
    return abs(hourDegree-minuteDegree);
}

int main()
{
    cout << angleClock(12, 30) << endl;
    cout << angleClock(3, 30) << endl;
    cout << angleClock(3, 15) << endl;
    return 0;
}