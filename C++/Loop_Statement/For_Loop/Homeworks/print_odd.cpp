// WAP to print odd number from 1 to user input.

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=n; i>=1; i--)
    {
        if(i%2 != 0)
        {
            cout<<i<<"\t";
        }
    }
    return 0;
}