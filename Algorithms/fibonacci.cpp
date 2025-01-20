#include <iostream>
using namespace std;

int fibonacci(int n)
{
    static int memo[35];
    if (n < 2)
    {
        memo[n] = n;
        return memo[n];
    }
}

int main()
{
    //code;
    return 0;
}