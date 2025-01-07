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
    int a1[n];
    cout << "Enter the values of the first array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a1[i];
    }
    int a2[n];
    cout << "Enter the values of the second array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a2[i];
    }
    int i0 = 0, i1 = 0;
    return 0;
}