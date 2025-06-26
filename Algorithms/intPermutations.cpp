#include <iostream>
#include <vector>
using namespace std;

vector <vector <int>> permute (int size)
{

}

int main()
{
    int size;
    cout << "Enter the number of elements from to permute: ";
    cin >> size;
    while (size < 1)
    {
        cout << "Invalid input! Try again: ";
        cin >> size;
    }
    return 0;
}