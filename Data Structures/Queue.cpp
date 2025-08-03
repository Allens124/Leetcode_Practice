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
        void push(T d)
        {
            if (size == 1000)
            {
                cout << "Queue overflow." << endl;
                return;
            }
            rear++;
            if (rear == 1000)
            {
                rear = 0;
            }
            data[rear] = d;
        }
        T pop()
        {
            if (size == 0)
            {
                cout << "Queue underflow." << endl;
                return T();
            }
            T ans = data[front];
            front++;
            if (front == 1000)
            {
                front = 0;
            }
            return ans;
        }
        void print()
        {
            for (int i = front; i != rear; i++)
            {
                if (i == 1000)
                {
                    i = 0;
                }
                cout << data[i] << endl;
            }
        }
};

int main()
{
    //code;
    return 0;
}