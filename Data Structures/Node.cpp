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
        void setData(T d)
        {
            data = d;
        }
        T getData()
        {
            return data;
        }
        void setNext(Node n)
        {
            next = n;
        }
        Node getNext()
        {
            return next;
        }
};

int main()
{
    //code;
    return 0;
}