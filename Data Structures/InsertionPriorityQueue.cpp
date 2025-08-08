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
};

int main()
{
    //code;
    return 0;
}