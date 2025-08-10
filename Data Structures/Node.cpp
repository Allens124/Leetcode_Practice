#include <iostream>
using namespace std;

template <typename T>

class Node
{
    private:
        T data;
        Node<T> next;
    public:
        Node(T d, Node<T> n)
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
        void setNext(Node<T> n)
        {
            next = n;
        }
        Node<T> getNext()
        {
            return next;
        }
};

int main()
{
    Node<int> n = Node<int>(1, NULL);
    return 0;
}