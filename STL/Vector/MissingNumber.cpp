/*
WAF to return missing number from an array.
Input: nums = [0,1,2,3,4,6,7,8,9];
Output: 5

*/

#include<iostream>
using namespace std;
#include<vector>

int missingNumber(vector<int>& nums)
{
    int size = nums.size();
    int sum = size*(size+1)/2;
    int s = 0;
    for(int val:nums){
        s+=val;
    }
    return sum-s;
}

int main()
{
    vector<int> vec = {0,1,2,3,5,6,7,8,9};
    int result = missingNumber(vec);
    cout<<"Missing number : "<<result;
}

// Missing number : 4