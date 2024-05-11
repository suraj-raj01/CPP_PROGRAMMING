/*
26. Write a program to check whether a number is Prime number or not.
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int k = n;
    int c=0;
    for(int i=n; i>=1; i--)
    {
        if(k%n==0)
        {
            c++;
        }
        n--;
    }
    if(c==2)
    {
        cout<<"prime";
    }
    else{
        cout<<"not prime";
    }
}

/*
Enter the number: 13
prime

OR,

Enter the number: 12
not prime
*/