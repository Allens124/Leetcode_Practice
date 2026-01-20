#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int minCostClimbingStairs(vector<int> cost)
{
    int size = cost.size();
    vector<int> opt(size, 0);
    if (size > 1)
    {
        opt[1] = min(cost[0], cost[1]);
    }
    for (int j = 2; j < size; j++)
    {
        opt[j] = min(cost[j-1] + opt[j-2], min(cost[j-1] + opt[j-1], cost[j] + opt[j-1]));
    }
    return opt[size-1];
}

int main()
{
    vector<int> example1 = {10, 15, 20};
    vector<int> example2 = {1, 100, 1, 1, 1, 100, 1, 1, 100, 1};
    cout << minCostClimbingStairs(example1) << endl;
    cout << minCostClimbingStairs(example2) << endl;
    return 0;
}