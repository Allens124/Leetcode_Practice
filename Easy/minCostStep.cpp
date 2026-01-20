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
}

int main()
{
    //code;
    return 0;
}