// WAP to print common factor.

#include<iostream>
using namespace std;
int main()
{
    int a=18,b=42;
    for(int i=2; i<=a; i++)
    {
        if(a%i==0 && b%i==0)
        {
            cout<<i<<"\n";
        }
    }
}