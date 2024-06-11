/*
Q.1 Given an array of size n-1 such that it only contains distinct integers in the range of 1 to n. Return the missing element.
Examples:
Input: n = 5, arr[] = {1,2,3,5} Output: 4
Input: n = 2, arr[] = {1} Output: 2
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)

*/

#include<iostream>
using namespace std;
#include<array>
int main()
{
    array<int,5> a = {2,4,3,1,0};
    int n = a.size();
    int sum = n*(n+1)/2;
    int s = 0;
    for(int i=0; i<n; i++)
    {
        s+=a[i];
    }
    cout<<"Missing Number is: "<<sum-s;
}