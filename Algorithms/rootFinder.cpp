#include <iostream>
using namespace std;

typedef double (*FUNC)(double);

double root(double start, double end, FUNC f, double accuracy = 0.01)
{
    int guess = (start+end)/2;

    return guess;
}

int main()
{
    //code;
    return 0;
}