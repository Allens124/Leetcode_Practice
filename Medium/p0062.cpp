#include <iostream>
using namespace std;

int uniquePaths(int m, int n)
{
    static int memo[100][100] = {0};
    if (m == 1 || n == 1)
    {
        return 1;
    }
    if (memo[m][n] != 0)
    {
        return memo[m][n];
    }
    memo[m][n] = uniquePaths(m-1, n) + uniquePaths(m, n-1);
    return memo[m][n];
}

int main()
{
    cout << uniquePaths(7, 3) << endl;
    cout << uniquePaths(3, 2) << endl;
    return 0;
}