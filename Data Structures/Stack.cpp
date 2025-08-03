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
        void push(T data)
        {
            if (top == 99)
            {
                cout << "Stack overflow." << endl;
                return;
            }
            arr[++top] = data;
        }
        T pop()
        {
            if (top == -1)
            {
                cout << "Stack underflow." << endl;
                return T();
            }
            return arr[top--];
        }
        int getSize()
        {
            return top+1;
        }
        bool isEmpty()
        {
            return top == -1;
        }
};

int main()
{
    Stack <char> myStack;
    myStack.push('a');
    myStack.push('b');
    myStack.push('c');
    while (!myStack.isEmpty())
    {
        cout << myStack.pop() << endl;
    }
    return 0;
}