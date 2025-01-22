#include <iostream>
using namespace std;

int factorial(int n)
{
    static int memo[35];
    if (n < 1)
    {
        memo[n] = n;
        return memo[n];
    }
    if (memo[n] == 0)
    {
        memo[n] = n*memo[n-1];
    }
}

int main()
{
    //code;
    return 0;
}