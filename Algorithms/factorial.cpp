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
    return memo[n];
}

int main()
{
    int n = 1;
    for (int i = 1; i < 100; i++)
    {
        cout << n*i << endl;
        n *= i;
    }
    return 0;
}