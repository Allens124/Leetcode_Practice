#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size)
{
    int round = 0;
    bool swap = true;
    while (swap)
    {
        swap  = false;
        for (int i = 0; i < size-round-1; i++)
        {
            if (arr[i] > arr[i+1])
            {
                int temp = arr[i+1];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                swap = true;
            }
        }
        round++;
    }
}

int main()
{
    int size;
    cout << "Enter the size of an array: ";
    cin >> size;
    while (size < 1)
    {
        cout << "Invalid input! Try again: ";
        cin >> size;
    }
    int arr[size];
    cout << "Enter the values of the array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Before sorting: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }
    cout << endl;
    bubbleSort(arr, size);
    return 0;
}