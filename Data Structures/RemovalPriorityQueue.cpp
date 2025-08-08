#include <iostream>
using namespace std;

template <typename T>

class PriorityQueue
{
    private:
        T data[1000];
        int size;
    public:
        void add(T d)
        {
            if (size == 1000)
            {
                cout << "Queue overflow." << endl;
                return;
            }
            int i = size;
            while (i > 0)
            {
                if (data[i-1] < d)
                {
                    data[i-1] = data[i];
                    i--;
                }
            }
            data[i] = d;
            size++;
        }
        T removeMin()
        {
            if (size == 0)
            {
                cout << "Queue underflow." << endl;
                return T();
            }
            T size--;
            return data[size];
        }
};

int main()
{
    //code;
    return 0;
}