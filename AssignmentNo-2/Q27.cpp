/*
27. Write a program to find sum of all prime numbers between 1 to n.
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int prime=0;
    int k = n;
    int c=0;
    for(int i=1; i<=n; i++)
    {
        if(k%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        prime++;
        cout<<"prime";
    }
    else{
        cout<<"not prime";
    }
}