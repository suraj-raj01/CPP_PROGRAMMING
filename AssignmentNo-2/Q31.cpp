/*
31. Write a program to check whether a number is Strong number or not.
*/

#include<iostream>
using namespace std;

int facts(int n)
{
    int fact = 1;
    for(int i=1; i<=n; i++)
    {
        fact*=i;
    }
    return fact;
}

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int k=n;
    int r;
    int sum=0;
    while(k!=0)
    {
        r = k%10;
        int f = facts(r);
        k=k/10;
        sum = sum+f;
    }
    if(sum==n)
    {
        cout<<"Strong Number";
    }
    else{
        cout<<"Not a Strong number";
    }
}

/*
Enter the number: 145
Strong Number

OR,

Enter the number: 254
Not a Strong number
*/