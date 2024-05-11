/*
21. Write a program to find power of a number using for loop.
*/

#include<iostream>
using namespace std;
int main()
{
    int b,p;
    cout<<"Enter the base: ";
    cin>>b;
    cout<<"Enter the power: ";
    cin>>p;
    int res = 1;
    for(int i=p; i>0; i--)
    {
        res*=b;
    }
    cout<<res;
}

/*
Enter the base: 2
Enter the power: 3
8

OR,

Enter the base: 3
Enter the power: 3
27
*/