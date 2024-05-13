/*
27. Write a program to find sum of all prime numbers between 1 to n.
*/

#include<iostream>
using namespace std;

bool isPrime(int n)
{
    for(int i=2; i<n/2; i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

int printPrime(int n)
{
    int sum = 0;
    for(int i=2; i<=n; i++)
    {
        if(isPrime(i))
        {
            sum+=i;
        }
    }
    return sum;
}

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"sum is: "<<printPrime(n);
}

/*
Enter the number: 15
sum is: 45
*/