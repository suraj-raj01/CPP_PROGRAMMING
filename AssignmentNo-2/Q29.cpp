/*
29. Write a program to check whether a number is Armstrong number or not.
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    while(n!=0)
    {
        n = n%10;
        cout<<n;
        n = n/10;
    }
}