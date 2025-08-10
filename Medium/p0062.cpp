#include <iostream>
using namespace std;

int uniquePaths(int m, int n)
{
    static int memo[100][100] = {0};
    if (m == 1 || n == 1)
    {
        return 1;
    }
    memo[m-1][n] = uniquePaths(m-1, n);
    memo[m][n-1] = uniquePaths(m, n-1);
    return memo[m-1][n] + memo[m][n-1];
}

int main()
{
    cout << uniquePaths(7, 3) << endl;
    cout << uniquePaths(3, 2) << endl;
    return 0;
}