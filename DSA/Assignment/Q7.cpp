/*
Q.7 Given a sorted vector of n elements, find the number of occurrences of each element.
Input: v = [4, 4, 8, 8, 8, 15, 16, 23, 23, 53]
Output: 4=2
        8=3
        15=1
        23=2
        53=1

*/

#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main()
{
    vector<int>a{4,4,8,8,8,15,16,23,23,53};
    cout<<"4 : "<<count(a.begin(),a.end(),4)<<"\n";
    cout<<"8 : "<<count(a.begin(),a.end(),8)<<"\n";
    cout<<"15 : "<<count(a.begin(),a.end(),15)<<"\n";
    cout<<"16 : "<<count(a.begin(),a.end(),16)<<"\n";
    cout<<"23 : "<<count(a.begin(),a.end(),23)<<"\n";
    cout<<"53 : "<<count(a.begin(),a.end(),53)<<"\n";
}