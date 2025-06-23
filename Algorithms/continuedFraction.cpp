#include <iostream>
#include <vector>
using namespace std;

vector <int> frac;

vector <int> continuedFraction(double num)
{
    double fracPart = num - (int)num;
    frac.push_back(num - fracPart);
    if (fracPart == 0 || frac.size() == 10)
    {
        cout << "base case reached";
        return frac;
    }
    cout << "recursive call reached";
    return continuedFraction(1/fracPart);
}

int main()
{
    double num;
    cout << "Enter a rational number: ";
    cin >> num;
    vector <int> contFrac;
    contFrac = continuedFraction(num);
    for (int i = 0; i < contFrac.size(); i++)
    {
        cout << contFrac[i] << " ";
    }
    cout << endl;
    return 0;
}