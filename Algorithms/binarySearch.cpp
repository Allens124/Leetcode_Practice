#include <iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int target)
{
    if (high-low == 1)
    {
        if (arr[low] == target)
        {
            return low;
        }
        else if (arr[high] == target)
        {
            return high;
        }
        else
        {
            return -1;
        }
    }
    int middle = (low+high)/2;
    if (arr[middle] < target)
    {
        return binarySearch(arr, middle, high, target);
    }
    if (arr[middle] > target)
    {
        return binarySearch(arr, low, middle, target);
    }
    return middle;
}

int main()
{
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << binarySearch(arr, 0, 9, 5) << endl;
    cout << binarySearch(arr, 0, 9, 1) << endl;
    cout << binarySearch(arr, 0, 9, 100) << endl;
    return 0;
}