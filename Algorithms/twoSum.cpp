#include <iostream>
using namespace std;

void twoSumZero(int arr[], int size)
{
    int i1 = 0, i2 = 0;
    while (i1 < i2)
    {
        if (arr[i1]+arr[i2] < 0)
        {
            i1++;
        }
        else if (arr[i1]+arr[i2] > 0)
        {
            i2--;
        }
        else
        {
            break;
        }
    }
    if (i1 == i2)
    {
        cout << "No such values." << endl;
    }
    else
    {
        cout << i1 << " and " << i2 << "." << endl;
    }
}

int main()
{
    //code;
    return 0;
}