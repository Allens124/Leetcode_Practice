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

void permutations(string result, string str, int c)
{
    if (c == str.length())
    {
        return;
    }
    for (int i = 0; i < str.length()-1; i++)
    {
        result = result+str[i];
        if (ok(result, c))
        {
            permutations(result, str, c+1);
        }
    }
}

int main()
{
    //code;
    return 0;
}