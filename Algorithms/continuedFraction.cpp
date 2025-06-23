#include <iostream>
#include <vector>
using namespace std;

vector <int> continuedFraction(double num)
{
    vector <int> frac;
    int fracPart = num - (int)num;
    frac.push_back(num - fracPart);
}

int main()
{
    //code;
    return 0;
}