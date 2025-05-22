#include <iostream>
using namespace std;

typedef double (*FUNC)(double);

double F(double x)
{
    return x*x*x + 2;
}

double root(double start, double end, FUNC f, double accuracy = 0.01)
{
    int guess = (start+end)/2;
    if (f(guess) < -accuracy)
    {
        if (f(start) < f(end))
        {
            return root(start, guess, f, accuracy);
        }
        return root(guess, end, f, accuracy);
    }
    if (f(guess) > accuracy)
    {
        if (f(start) < f(end))
        {
            return root(start, guess, f, accuracy);
        }
        return root(guess, end, f, accuracy);
    }
    return guess;
}

int main()
{
    cout << root(-2, 0, F) << endl;
    return 0;
}