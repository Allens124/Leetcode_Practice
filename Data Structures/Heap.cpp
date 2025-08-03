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
};

int main()
{
    //code;
    return 0;
}