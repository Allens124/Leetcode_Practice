#include <iostream>
#include <vector>
using namespace std;

void permute (vector <vector <int>>)
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
    vector <vector <int>> permutations;
    permute(permutations);
    return 0;
}