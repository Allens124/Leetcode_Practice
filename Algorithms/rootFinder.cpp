#include <iostream>
using namespace std;

typedef double (*FUNC)(double);

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
    //code;
    return 0;
}