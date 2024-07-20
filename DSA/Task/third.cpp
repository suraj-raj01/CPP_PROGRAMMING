/*
Q.3 Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.
Example 1:
Input: nums = [1,2,3,4,5,6,7], k = 3Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]
Example 2:
Input: nums = [-1,-100,3,99], k = 2Output: [3,99,-1,-100]

*/


#include<iostream>
using namespace std;
#include<array>
int main()
{
    array<int, 4>a = {-1,-100,3,99};
    array<int, 4>b;
    int s = a.size();
    int step = 2;
    for(int i=0; i<s; i++)
    {
        b[(i+step)%s] = a[i];
    }
    for(auto k:b)
    {
        cout<<k<<" ";
    }
}

// Time Complexity : O(n)
// Space Complexity : O(1)

/*
#include<iostream>
using namespace std;
#include<array>
#include<algorithm>
int main()
{
    array<int,7> a = {1,2,3,4,5,6,7};
    // array<int,4>a = {-1,-100,3,99};
    int len = a.size();
    int n;
    cout<<"Enter the number of rotation: ";
    cin>>n;
    int k=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<len; j++)
        {
            int temp = a[len-1];
            a[len-1] = a[j];
            a[j] = temp;
        }
    cout<<i+1<<" Step:- [ ";
    for(int i=0; i<len; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"]";
    cout<<"\n";
    }
}

// Time Complexity : O(n2)
// Space Complexity : O(1)
*/
