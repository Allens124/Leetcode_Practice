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
    int a1[n], a2[n];
    return 0;
}