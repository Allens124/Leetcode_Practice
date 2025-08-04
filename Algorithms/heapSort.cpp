#include <iostream>
using namespace std;

template <typename T>

void swapData(T heap[], int i, int j)
{
    T temp = heap[i];
    heap[i] = heap[j];
    heap[j] = temp;
}

void bubbleUp(T heap[], int i)
{
    if (i == 0)
    {
        return;
    }
    T dn = heap[i];
    T dp = heap[(i-1)/2];
    if (dp < dn)
    {
        swapData(heap, i, (i-1)/2);
        bubbleUp(heap, (i-1)/2);
    }
}

void bubbleDown(T heap[], int i, int size)
{
    if (2*i+1 >= size)
    {
        return;
    }
    T dn = heap[i];
    T dl = heap[2*i+1];
    T dr = dl;
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
        swapData(i, 2*i+1);
        bubbleDown(2*i+1);
    }
    else
    {
        swapData(i, 2*i+2);
        bubbleDown(2*i+2);
    }
}

void heapSort(T array[], int size)
{
    T heap[size];
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

void print(T array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main()
{
    //code;
    return 0;
}