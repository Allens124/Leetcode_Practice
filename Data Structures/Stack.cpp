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
    //code;
    return 0;
}