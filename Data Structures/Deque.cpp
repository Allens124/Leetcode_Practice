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
        void print()
        {
            for (int i = (front+1)%1000; i != rear+1; i++)
            {
                cout << data[i] << endl;
            }
        }
};

int main()
{
    int size, input;
    cout << "Enter the number of elements to push to the front of a deque: ";
    cin >> size;
    while (size < 1)
    {
        cout << "Invalid input! Try again: ";
        cin >> size;
    }
    Deque<int> myDeque = Deque<int>();
    cout << "Enter values into the deque: ";
    for (int i = 0; i < size; i++)
    {
        cin >> input;
        myDeque.push_front(input);
    }
    cout << "Before pop_rear(): " << endl;
    myDeque.print();
    cout << "After pop_rear(): " << endl;
    while (!myDeque.isEmpty())
    {
        cout << myDeque.pop_front() << endl;
    }
    return 0;
}