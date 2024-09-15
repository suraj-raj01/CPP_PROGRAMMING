// WAF to reverse an array using Two pointer variable.

#include<iostream>
using namespace std;
#include<vector>

// here we passed by reference because we want to change also in main function
void reverseArray(vector<int>& nums)
{
    int start=0;
    int end=nums.size()-1;
    for(int i=0; i<nums.size(); i++)
    {
        if(start<end){
            swap(nums[start],nums[end]);
            start++;
            end--;
        }
    }
}

int main()
{
    vector<int>vec = {1,2,3,4,5,6};
    reverseArray(vec);
    cout<<"After reverse the array"<<endl;
    for(int val:vec)
    {
        cout<<val<<" ";
    }
}

/*
After reverse the array
6 5 4 3 2 1 
*/