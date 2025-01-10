#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << linearSearch(arr, 10, 5) << endl;
    cout << linearSearch(arr, 10, 1) << endl;
    cout << linearSearch(arr, 10, 100) << endl;
    return 0;
}