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
    return 0;
}