#include <iostream>
#include <vector>
using namespace std;

void permute (vector <vector <int>> permutations, int size)
{
    //code;
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
    vector <vector <int>> permutations;
    permute(permutations, size);
    return 0;
}