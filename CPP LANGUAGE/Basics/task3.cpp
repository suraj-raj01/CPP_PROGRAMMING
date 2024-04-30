/*
WAP to take input 4 digit number from user and sum first digit and last digit.
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the firs number: ";
    cin>>n;
    if(n<1000 || n>10000)
    {
        cout<<"please enter 4 digit number!!";
    }
    else{
        int first = n/1000;
        int last = n%1000%100%10;
        cout<<"sum is: "<<first+last;
    }
}