/*
Q.2 Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
Note that you must do this in-place without making a copy of the array.
 Example 1:
Input: nums = [0,1,0,3,12] Output: [1,3,12,0,0]
Example 2:
Input: nums = [0] Output: [0]

*/

#include<iostream>
using namespace std;
#include<array>
#include<algorithm>
int main()
{
    array<int ,5>a= {0,1,0,3,12};
    sort(a.begin(),a.end());
    cout<<"Sort Data: ";
    for(int i=0;i<a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    for(int i=0; i<a.size(); i++)
    {
        for(int j=0; j<a.size(); j++)
        {
            if(a[j]==0)
            {
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    cout<<"replace 0 in end: ";
    for(int i=0; i<a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
}