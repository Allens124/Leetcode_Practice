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
            size++;
        }
        T pop_front()
        {
            if (size == 0)
            {
                cout << "Deque underflow." << endl;
                return T();
            }
            front++;
            if (front == 1000)
            {
                front = 0;
            }
            size--;
            return data[front];
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
            size++;
        }
        T pop_back()
        {
            if (size == 0)
            {
                cout << "Deque underflow." << endl;
                return T();
            }
            T ans = data[rear];
            rear--;
            if (rear == -1)
            {
                rear = 999;
            }
            size--;
            return ans;
        }
        int getSize()
        {
            return size;
        }
        bool isEmpty()
        {
            return size == 0;
        }
};

int main()
{
    //code;
    return 0;
}