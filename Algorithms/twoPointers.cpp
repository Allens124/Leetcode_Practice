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
    int i0 = 0, i1 = 1;
    for (int i = 2; i < n; i++)
    {
        if (arr[i0] <= arr[i])
        {
            int temp = i0;
            i0 = i;
            i1 = temp;
        }
        if (arr[i1] <= arr[i] && i0 != i)
        {
            i1 = i;
        }
    }
    cout << "Largest element of the array: " << arr[i0] << endl;
    cout << "Second largest element of the array: " << arr[i1] << endl;
    return 0;
}