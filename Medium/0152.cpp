#include <iostream>
using namespace std;

int maxProduct(int nums[], int size)
{
    int tempProd = nums[0], maxProd = nums[0];
    for (int i = 0; i < size-1; i++)
    {
        if (tempProd*nums[i+1] > tempProd)
        {
            tempProd *= nums[i+1];
        }
        else if (tempProd*nums[i+1] < tempProd && i < size-2)
        {
            if (tempProd*nums[i+1]*nums[i+2])
            {
                tempProd *= nums[i+1];
            }
        }
        if (maxProd < tempProd)
        {
            maxProd = tempProd;
        }
    }
    return maxProd;
}

int main()
{
    int nums1[4] = {2, 3, -2, 4};
    cout << maxProduct(nums1, 4) << endl;
    int nums2[3] = {-2, 0, -1};
    cout << maxProduct(nums2, 3) << endl;
    return 0;
}