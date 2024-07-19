/*
Two pair Sum
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.
Input: nums = [2,7,11,15], target = 9
Output: [0,1]

*/

#include<iostream>
using namespace std;
#include<vector>
int main()
{
    vector<int>a{2,7,11,15};
    int size = a.size()-1;
    int sum = 0;
    int target = 9;
    int left=0;
    while(left<size)
    {
        sum = a[left]+a[size];
        if(sum==target)
        {
            cout<<"["<<left<<","<<size<<"]";
            break;
        }
        else if(sum<target)
        {
            left++;
        }
        else if(sum>target)
        {
            size--;
        }
    }
}