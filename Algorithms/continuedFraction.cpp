#include <iostream>
#include <vector>
using namespace std;

vector <int> continuedFraction(double num)
{
    vector <int> frac;
    int fracPart = num - (int)num;
    frac.push_back(num - fracPart);
    if (fracPart == 0 || frac.size() == 10)
    {
        return frac;
    }
}

int main()
{
    //code;
    return 0;
}