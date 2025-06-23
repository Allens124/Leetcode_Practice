#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void continuedFraction(vector <int> &frac, double num)
{
    double fracPart = num - (int)num;
    frac.push_back(num - fracPart);
    if (abs(fracPart) < 0.0001 || frac.size() > 10)
    {
        return;
    }
    return continuedFraction(frac, 1/fracPart);
}

int main()
{
    double num;
    cout << "Enter a rational number: ";
    cin >> num;
    vector <int> contFrac;
    continuedFraction(contFrac, num);
    for (int i = 0; i < contFrac.size(); i++)
    {
        cout << contFrac[i] << " ";
    }
    cout << endl;
    return 0;
}