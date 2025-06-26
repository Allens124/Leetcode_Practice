#include <iostream>
using namespace std;

bool ok(string result, char next)
{
    cout << "result is " << result << endl;
    for (int i = 0; i < result.length(); i++)
    {
        if (result[i] == next)
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
        cout << result << endl;
        return;
    }
    for (int i = 0; i < str.length(); i++)
    {
        if (ok(result, str[i]))
        {
            result = result+str[i];
            permutations(result, str, c+1);
        }
    }
}

int main()
{
    permutations("", "abc", 0);
    return 0;
}