#include <iostream>
using namespace std;

template <typename T>

class Node
{
    private:
        T data;
        Node next;
    public:
        Node(T d, Node n)
        {
            data = d;
            next = n;
        }
};

int main()
{
    //code;
    return 0;
}