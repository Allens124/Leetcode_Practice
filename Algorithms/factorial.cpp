#include <iostream>
using namespace std;

int factorial(int n)
{
    static int memo[35];
    cout << memo[15] << endl;
    if (n < 1)
    {
        memo[n] = n;
        return memo[n];
    }
    if (memo[n] == 0)
    {
        memo[n] = n*factorial[n-1];
    }
    return memo[n];
}

int main()
{
    int n = 1;
    for (int i = 1; i < 15; i++)
    {
        cout << i << ": " << n*i << endl;
        n *= i;
    }
    cout << factorial(15) << endl;
    return 0;
}