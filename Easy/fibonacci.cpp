#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n < 2)
    {
        return n;
    }
    int f0 = 0, f1 = 1, fn;
    for (int i = 2; i <= n; i++)
    {
        fn = f1+f0;
        f0 = f1;
        f1 = fn;
    }
    return fn;
}

int main()
{
    int n;
    cout << "Enter a non-negative integer: ";
    cin >> n;
    while (n < 0)
    {
        cout << "Invalid input! Try again: ";
        cin >> n;
    }
    cout << "Term " << n << " in the Fibonacci sequence is: " << fibonacci(n) << endl;
    return 0;
}