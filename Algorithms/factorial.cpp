#include <iostream>
using namespace std;

int factorial(int n)
{
    static int memo[13];
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
    for (int i = 0; i < 13; i++)
    {
        cout << "f(" << i << ") = " << factorial(i) << endl;
    }
    return 0;
}