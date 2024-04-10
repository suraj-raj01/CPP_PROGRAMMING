/*
WAP to enter 4 digit number and add first and last digit of this
number.
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the 4 digit number: ";
    cin>>n;
    if(n>999 && n<10000)
    {
        int first,last;
        first = n/1000;
        last = n%1000%100%10;
        cout<<"The sum of "<<first<<" and "<<last<<" : "<<first+last;
    }
    else
    {
        cout<<"Please enter 4 digit number";
    }
}