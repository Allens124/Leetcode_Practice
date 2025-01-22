#include <iostream>
using namespace std;

int factorial(int n)
{
    static int memo[12];
    if (n < 2)
    {
        memo[n] = 1;
        return memo[n];
    }
    if (memo[n] == 0)
    {
        memo[n] = n*factorial(n-1);
    }
    return memo[n];
}

int main()
{
    
    return 0;
}