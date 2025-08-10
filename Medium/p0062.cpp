#include <iostream>
using namespace std;

int uniquePaths(int n, int m)
{
    if (n == 1 || n == 1)
    {
        return 1;
    }
    return uniquePaths(m-1, n) + uniquePaths(m, n-1);
}

int main()
{
    //code;
    return 0;
}