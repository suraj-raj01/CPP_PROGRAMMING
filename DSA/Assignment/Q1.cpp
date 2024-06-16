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
    vector<int>a{2,4,6,11,8,12};
    int n;
    cout<<"Enter the Target Element : ";
    cin>>n;
    for(int i=0; i<a.size(); i++)
    {
        for(int j=0; j<a.size(); j++){
            if(a[i]+a[j]==n){
                cout<<"[ "<<i<<" , "<<j<<" ]\n";
            }
        }
    }
}