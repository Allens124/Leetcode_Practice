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
            for (int i = 0; i < size; i++)
            {
                cout << data[i] << endl;
            }
        }
};

int main()
{
    int size, input;
    cout << "Enter the number of elements to push to a heap: ";
    cin >> size;
    while (size < 1)
    {
        cout << "Invalid input! Try again: ";
        cin >> size;
    }
    PriorityQueue<int> myQueue = PriorityQueue<int>();
    cout << "Enter values into the heap: ";
    for (int i = 0; i < size; i++)
    {
        cin >> input;
        myQueue.add(input);
    }
    cout << "Before removeMin(): " << endl;
    myQueue.print();
    cout << "After removeMin(): " << endl;
    while (!myQueue.isEmpty())
    {
        cout << myQueue.removeMin() << endl;
    }
    return 0;
}