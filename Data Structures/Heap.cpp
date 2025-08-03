#include <iostream>
using namespace std;

template <typename T>

class Heap
{
    private:
        T data[1000];
        int size;
    public:
        Heap()
        {
            size = 0;
        }
        void add(T d)
        {
            if (size == 1000)
            {
                cout << "Heap is full." << endl;
                return;
            }
            T[size] = d;
            bubbleUp(size);
            size++;
        }
        T removeMin()
        {
            if (size == 0)
            {
                cout << "Heap is empty. Default return." << endl;
                return data[0];
            }
            size--;
            T ans = data[0];
            swapData(0, size);
            bubbleDown(0);
            return ans;
        }
    private:
        void swapData(int n, int m)
        {
            T temp = data[n];
            data[n] = data[m];
            data[m] = temp;
        }
        void bubbleUp(int n)
        {
            if (n == 0)
            {
                return;
            }
            T dn = data[n];
            T dp = data[(n-1)/2];
            if (dn < dp)
            {
                swapData(n, (n-1)/2);
                bubbleUp((n-1)/2);
            }
        }
        void bubbleDown(int n)
        {
            if (2*n+1 >= size)
            {
                return;
            }
            T dn = data[n];
            T dl = data[2*n+1];
            T dr = dl;
            if (2*n+2 < size)
            {
                dr = data[2*n+2];
            }
            if (dn < dl && dn < dr)
            {
                return;
            }
            if (dl < dr)
            {
                swapData(n, 2*n+1);
                bubbleDown(2*n+1);
            }
            else
            {
                swapData(n, 2*n+2);
                bubbleDown(2*n+2);
            }
        }
};

int main()
{
    //code;
    return 0;
}