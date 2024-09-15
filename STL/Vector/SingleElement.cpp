/*
Given a non-empty array of integers nums, every element appears twice except for one.
Find that single one.

You must implement a solution with a linear runtime complexity and use only constant 
extra space.

Example 1:
Input: nums = [2,2,1]
Output: 1

Example 2:
Input: nums = [4,1,2,1,2]
Output: 4

*/

#include<iostream>
using namespace std;
#include<vector>

class SingleNumber{
    public:
    int singleNumber(vector<int>& nums)  // passed by reference
    {
        int ans = 0;
        for(int val:nums){
            ans^=val;
        }
        return ans;
    }
};

int main()
{
    vector<int>vec = {4,1,2,1,2};
    SingleNumber sn = SingleNumber();
    int result = sn.singleNumber(vec);
    cout<<"Single number : "<<result;
}

// Single number : 4