#include <iostream>
using namespace std;

bool ok(string str, int c)
{
    for (int i = 0; i < c; i++)
    {
        if (str[c] == str[i])
        {
            return false;
        }
    }
    return true;
}

void permutations(string str, int c)
{
    if (c == str.length())
    {
        return;
    }
}

int main()
{
    //code;
    return 0;
}