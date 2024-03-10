// WAP to print the sum of n number (For Loop).

#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=0; i<=n; i++)
    {
        sum+=i;
    }
    cout<<"Sum is: "<<sum;
}