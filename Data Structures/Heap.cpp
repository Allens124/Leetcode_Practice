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
};

int main()
{
    //code;
    return 0;
}