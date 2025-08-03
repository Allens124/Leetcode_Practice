#include <iostream>
using namespace std;

template <typename T>

class Queue
{
    private:
        T data[1000];
        int front;
        int rear;
        int size;
    public:
        Queue()
        {
            front = 0;
            rear = -1;
            size = 0;
        }
};

int main()
{
    //code;
    return 0;
}