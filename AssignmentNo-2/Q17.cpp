/*
17. Write a program to check whether a number is palindrome or not.
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int res;
    while(n>0)
    {
        res = n%10;
        n = n/10;
        cout<<res;
    }
}