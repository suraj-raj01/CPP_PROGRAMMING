// Max Sum of SubArray.

#include <iostream>
using namespace std;
#include <vector>

void maxSumOfSubArr(vector<int> &nums)
{
    int maxSum = INT32_MIN;
    for (int start = 0; start < nums.size(); start++)
    {
        int currSum = 0;
        for (int end = start; end < nums.size(); end++)
        {
            currSum += nums[end];
            maxSum = max(currSum, maxSum);
        }
    }
    cout << "Maximum subArray sum : " << maxSum;
}

int main()
{
    vector<int> vec = {3, -4, 5, 4, -1, 7, -8};
    maxSumOfSubArr(vec);
}

/*
Maximum subArray sum : 15
*/