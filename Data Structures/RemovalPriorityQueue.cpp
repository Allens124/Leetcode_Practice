#include <iostream>
using namespace std;

template <typename T>

class PriorityQueue
{
    private:
        T data[1000];
        int size;
    public:
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
};

int main()
{
    //code;
    return 0;
}