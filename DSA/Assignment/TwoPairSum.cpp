/*
Q.1 Problem :Two Pair Sum
Statement:Given an vector of integers nums and an integer target,return indices of the 
two numbers such that they add up to target.
Input:v[]={2,4,6,11,8,12}, target=14
Output:[2,4]
*/

#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main()
{
    vector<int>a{1,5,4,7,8};
    int n;
    cout<<"Enter the target element: ";
    cin>>n;
    int x = 0;
    int b = a.size()-1;
    int sum=0;
    while(x<b)
    {
        sum = a[x]+a[b];
        if(sum==n)
        {
            cout<<"["<<x<<","<<b<<"]";
            break;
        }
        else if(sum<n)
        {
            x++;
        }
        else if(sum>n)
        {
            b--;
        }
        else if(sum!=n){
            cout<<"Not Possible!!!";
        }
    }
}

