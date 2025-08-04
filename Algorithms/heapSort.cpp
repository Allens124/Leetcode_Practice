#include <iostream>
using namespace std;

void swapData(int heap[], int i, int j)
{
    int temp = heap[i];
    heap[i] = heap[j];
    heap[j] = temp;
}

void bubbleUp(int heap[], int i)
{
    if (i == 0)
    {
        return;
    }
    int dn = heap[i];
    int dp = heap[(i-1)/2];
    if (dp < dn)
    {
        swapData(heap, i, (i-1)/2);
        bubbleUp(heap, (i-1)/2);
    }
}

void bubbleDown(int heap[], int i, int size)
{
    if (2*i+1 >= size)
    {
        return;
    }
    int dn = heap[i];
    int dl = heap[2*i+1];
    int dr = dl;
    if (2*i+2 < size)
    {
        dr = heap[2*i+2];
    }
    if (dn < dl && dn < dr)
    {
        return;
    }
    if (dl <= dr)
    {
        swapData(heap, i, 2*i+1);
        bubbleDown(heap, 2*i+1, size);
    }
    else
    {
        swapData(heap, i, 2*i+2);
        bubbleDown(heap, 2*i+2, size);
    }
}

void heapSort(int array[], int size)
{
    int heap[size];
    for (int i = 0; i < size; i++)
    {
        heap[i] = array[i];
        bubbleUp(array, i);
    }
    for (int i = 0; i < size; i++)
    {
        array[i] = heap[0];
        swapData(heap, 0, size-1-i);
        bubbleDown(heap, 0, i+1);
    }
}

void print(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[10] = {4, 2, 6, 7, 1, 3, 5, 9, 0, 8};
    print(arr, 10);
    heapSort(arr, 10);
    print(arr, 10);
    return 0;
}