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
    if (memo[n] == 0)
    {
        memo[n] = fibonacci(n-1)+fibonacci(n-2);
    }
    return memo[n];
}

int main()
{
    for (int i = 0; i < 35; i++)
    {
        cout << i << " " << fibonacci(i) << endl;
    }
    return 0;
}