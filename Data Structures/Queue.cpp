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
        void enqueue(T d)
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
        T dequeue()
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
    int size, input;
    cout << "Enter the number of elements to push to a queue: ";
    cin >> size;
    while (size < 1)
    {
        cout << "Invalid input! Try again: ";
        cin >> size;
    }
    Queue<int> myQueue = Queue<int>();
    cout << "Enter values into the queue: ";
    for (int i = 0; i < size; i++)
    {
        cin >> input;
        myQueue.enqueue(input);
    }
    cout << "Before dequeue(): " << endl;
    myQueue.print();
    cout << "After dequeue(): " << endl;
    while (!myQueue.isEmpty())
    {
        cout << myQueue.dequeue() << endl;
    }
    return 0;
}