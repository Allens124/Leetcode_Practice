#include <iostream>
using namespace std;

template <typename T>

class PriorityQueue
{
    private:
        T data[1000];
        int size;
    public:
        PriorityQueue()
        {
            size = 0;
        }
        void add(T d)
        {
            if (size == 1000)
            {
                cout << "Queue overflow." << endl;
                return;
            }
            data[size] = d;
            size++;
        }
        T removeMin()
        {
            if (size == 0)
            {
                cout << "Queue underflow." << endl;
                return T();
            }
            int min = 0;
            for (int i = 1; i < size; i++)
            {
                if (data[min] < data[i])
                {
                    min = i;
                }
            }
            size--;
            T temp = data[min];
            data[min] = data[size];
            return temp;
        }
};

int main()
{
    //code;
    return 0;
}