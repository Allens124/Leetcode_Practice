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
    //code;
    return 0;
}