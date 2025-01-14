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
    vector <int> result = {i1, i2};
    return result;
}

int main()
{
    //code;
    return 0;
}