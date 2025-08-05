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
        void push_front(T d)
        {
            if (size == 1000)
            {
                cout << "Deque overflow." << endl;
                return;
            }
            data[front] = d;
            front--;
            if (front == -1)
            {
                front = 999;
            }
        }
        T pop_front()
        {
            
        }
        void push_back(T d)
        {
            if (size == 1000)
            {
                cout << "Deque overflow." << endl;
                return;
            }
            rear++;
            if (rear == 1000)
            {
                rear = 0;
            }
            data[rear] = d;
        }
        T pop_back()
        {

        }
};

int main()
{
    //code;
    return 0;
}