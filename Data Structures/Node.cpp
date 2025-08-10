#include <iostream>
using namespace std;

template <typename T>

class Node
{
    private:
        T data;
        Node* next;
    public:
        Node(T d, Node* n)
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
        void setNext(Node* n)
        {
            next = n;
        }
        Node* getNext()
        {
            return next;
        }
};

int main()
{
    Node<int> e = Node<int>(5, nullptr);
    Node<int> d = Node<int>(1, &e);
    Node<int> c = Node<int>(4, &d);
    Node<int> b = Node<int>(1, &c);
    Node<int> a = Node<int>(3, &b);
    return 0;
}