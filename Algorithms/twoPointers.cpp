#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;
    while (n < 2)
    {
        cout << "Invalid input! Try again: ";
        cin >> n;
    }
    int arr[n];
    cout << "Enter the values of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    return 0;
}