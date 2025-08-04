#include <iostream>
using namespace std;

void heapSort(int array[], int size)
{
    int heap[size];
    for (int i = 0; i < size; i++)
    {
        heap[i] = array[i];
        // add()
    }
    for (int i = 0; i < size; i++)
    {
        array[i] = heap[0];
        // removeMin()
    }
}

int main()
{
    //code;
    return 0;
}