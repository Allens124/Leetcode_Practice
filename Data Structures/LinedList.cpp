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
};

int main()
{
    //code;
    return 0;
}