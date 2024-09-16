// Print all possible subArray

#include<iostream>
using namespace std;
#include<vector>

void printSubArray(vector<int>& nums)
{
    for(int i=0; i<nums.size(); i++)
    {
        for(int j=i; j<nums.size(); j++)
        {
            for(int k=i; k<=j; k++)
            {
                cout<<nums[k];
            }
            cout<<" ";
        }
        cout<<"\n";
    }
}

int main()
{
    vector<int> vec = {1,2,3,4,5,6,7,8};
    printSubArray(vec);
}