/*
28. Write a program to find all prime factors of a number.
*/

#include<iostream>
using namespace std;

bool isPrimeFact(int n)
{
    for(int i=2; i<=n/2; i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

void printPrime(int n)
{
    int sum=0;
    for(int i=2; i<=n; i++)
    {
        if(isPrimeFact(i))
        {
            cout<<i<<" ";
        }
    }
}
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    printPrime(n);
}