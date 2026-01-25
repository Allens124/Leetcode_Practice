#include <iostream>
using namespace std;

void selectionSort(int A[], int n)
{
    int minIdx, temp;
    for (int i = 0; i < n-1; i++)
    {
        minIdx = i;
        for (int j = i+1; j < n; j++)
        {
            if (A[j] < A[minIdx])
            {
                minIdx = j;
            }
        }
        temp = A[i];
        A[i] = A[minIdx];
        A[minIdx] = temp;
    }
}

int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    while (n < 1)
    {
        cout << "Invalid input. Try again: ";
        cin >> n;
    }
    int arr[n];
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Before sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    selectionSort(arr, n);
    cout << "After sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}