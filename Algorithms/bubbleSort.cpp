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
    return 0;
}