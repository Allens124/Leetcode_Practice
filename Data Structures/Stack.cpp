#include <iostream>
using namespace std;

template <typename T>

class Stack
{
    private:
        int top;
        T arr[100];
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
            top++;
            arr[top] = data;
        }
};

int main()
{
    //code;
    return 0;
}