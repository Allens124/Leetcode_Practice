#include <iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int target)
{
    if (low == high)
    {
        if (arr[low] == target)
        {
            return low;
        }
        else
        {
            return -1;
        }
    }
    int middle = (low+high)/2;
}

int main()
{
    //code;
    return 0;
}