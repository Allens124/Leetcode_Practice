#include <iostream>
#include <vector>
using namespace std;

vector <int> twoSum(vector <int> numbers, int target)
{
    int i1 = 0, i2 = numbers.size()-1;
    while (i1 < i2)
    {
        if (numbers[i1]+numbers[i2] < target)
        {
            i1++;
        }
        else if (numbers[i1]+numbers[i2] > target)
        {
            i2--;
        }
        else
        {
            break;
        }
    }
    vector <int> result;
    result.push_back(i1);
    result.push_back(i2);
    return result;
}

int main()
{
    vector <int> v1;
    v1.push_back(2);
    v1.push_back(7);
    v1.push_back(11);
    v1.push_back(15);
    vector <int> result = twoSum(v1, 9);
    for (int i : result)
    {
        cout << i << endl;
    }
    return 0;
}