#include <iostream>
using namespace std;

int myAtoi(string s)
{

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