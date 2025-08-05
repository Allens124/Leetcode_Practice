#include <iostream>
using namespace std;

template <typename T>

class Deque
{
    private:
        T data[1000];
        int front;
        int rear;
        int size;
    public:
        Deque()
        {
            front = 0;
            rear = 0;
            size = 0;
        }
};

int main()
{
    //code;
    return 0;
}