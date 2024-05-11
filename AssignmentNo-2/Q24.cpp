/*
24. Write a program to find HCF (GCD) of two numbers.
*/

#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    for(int i=2; i<a; i++)
    {
        if(a%i==0 && b%i==0)
        {
            cout<<i<<" ";
        }
    }
}

/*
Enter the first number: 98
Enter the second number: 56
2 7 14 
*/