/*
Q.2 Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
Note that you must do this in-place without making a copy of the array.
 Example 1:
Input: nums = [0,1,0,3,12] Output: [1,3,12,0,0]
Example 2:
Input: nums = [0] Output: [0]

*/

/*
#include<iostream>
using namespace std;
#include<array>
#include<algorithm>
int main()
{
    array<int ,5>a= {0,1,0,3,12};

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
*/

/*
#include<iostream>
using namespace std;
#include<array>
int main()
{
    array<int, 5>a = {2,0,3,1,0};
    array<int, 5>b;
    int c = 0;
    for(int i=0; i<a.size(); i++)
    {
        if(a[i]!=0)
        {
            b[c] = a[i];
            c++;
        }
    }
    while(c<a.size())
    {
        b[c] = 0;
        c++;
    }
    for(auto k:b)
    {
        cout<<k<<" ";
    }
}

// Time Complexity: O(n)
// Space Complexity: O(n)
*/

#include<iostream>
using namespace std;
#include<vector>
class Solution{
    public:
    void moveZero(vector<int>num)
    {
        int l=0;
        for(int r=0; r<num.size(); r++)
        {
            if(num[r]!=0)
            {
                swap(num[r],num[l]);
                l++;
            }
        }
        for(int i=0; i<num.size(); i++)
        {
            cout<<num[i]<<"  ";
        }
    }
};
int main()
{
    Solution s;
    vector<int>num{0,0,2,0,4,0,8};
    s.moveZero(num);
}

// Time Complexity: O(n)
// Space Complexity: O(1)