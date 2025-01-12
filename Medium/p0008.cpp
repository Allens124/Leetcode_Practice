#include <iostream>
using namespace std;

int myAtoi(string s)
{
    int result = 0, sign = 1;
    while (s[0] == ' ')
    {
        s = s.substr(1);
    }
    if (s[0] == '+')
    {
        s = s.substr(1);
    }
    else if (s[0] == '-')
    {
        sign = -1;
        s = s.substr(1);
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (!(s[i] >= '0' && s[i] <= '9'))
        {
            break;
        }
        result = 10*result+(s[i]-'0');
    }
    return sign*result;
}

int main()
{
    cout << myAtoi("42") << endl;
    cout << myAtoi(" -042") << endl;
    cout << myAtoi("1337c0d3") << endl;
    cout << myAtoi("0-1") << endl;
    cout << myAtoi("words and 987") << endl;
    return 0;
}