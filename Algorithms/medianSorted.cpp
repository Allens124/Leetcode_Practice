#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;
    while (n < 1)
    {
        cout << "Invalid input! Try again: ";
        cin >> n;
    }
    int a0[n];
    cout << "Enter the values of the first array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a0[i];
    }
    int a1[n];
    cout << "Enter the values of the second array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a1[i];
    }
    int i0 = 0, i1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a0[i0] < a1[i1])
        {
            i0++;
        }
        else
        {
            i1++;
        }
    }
    double median;
    median = (a0[i0]+a1[i1])/2.0;
    cout << "Median of the two arrays: " << median << endl;
    return 0;
}