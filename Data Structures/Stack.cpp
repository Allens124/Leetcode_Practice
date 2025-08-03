#include <iostream>
using namespace std;

template <typename T>

class Stack
{
    private:
        T data[1000];
        int top;
    public:
        Stack()
        {
            top = -1;
        }
        void push(T d)
        {
            if (top == 99)
            {
                cout << "Stack overflow." << endl;
                return;
            }
            top++;
            data[top] = d;
        }
        T pop()
        {
            if (top == -1)
            {
                cout << "Stack underflow." << endl;
                return T();
            }
            T ans = data[top];
            top--;
            return ans;
        }
        int getSize()
        {
            return top+1;
        }
        bool isEmpty()
        {
            return top == -1;
        }
        void print()
        {
            for (int i = top; i > -1; i--)
            {
                cout << data[i] << endl;
            }
        }
};

int main()
{
    int size, input;
    cout << "Enter the number of elements to push to a stack: ";
    cin >> size;
    while (size < 1)
    {
        cout << "Invalid input! Try again: ";
        cin >> size;
    }
    Stack<int> myStack = Stack<int>();
    cout << "Enter values into the stack: ";
    for (int i = 0; i < size; i++)
    {
        cin >> input;
        myStack.push(input);
    }
    cout << "Before pop(): " << endl;
    myStack.print();
    cout << "After pop(): " << endl;
    while (!myStack.isEmpty())
    {
        cout << myStack.pop() << endl;
    }
    return 0;
}