#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int minCostStep(vector<int> cost)
{
    int size = cost.size();
    int opt[size] = {0};
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
    //code;
    return 0;
}