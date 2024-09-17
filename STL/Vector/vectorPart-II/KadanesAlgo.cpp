// Kadane's Algorithm

#include<iostream>
using namespace std;
#include<vector>

class KadanesAlgo{
    public:
    int maxSubArrSum(vector<int>& nums)
    {
        int res = nums[0];
        int ending = nums[0];
        for(int i=0; i<nums.size(); i++)
        {
            ending = max(ending+nums[i],nums[i]);
            res = max(res,ending);
        }
        return res;
    }
};

int main()
{
    vector<int> nums = {1,-4,5,4,3,1,-8};
    KadanesAlgo ka;
    cout<<"Max SubArray Sum : ";
    cout<<ka.maxSubArrSum(nums);
}