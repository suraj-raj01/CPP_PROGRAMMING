/*
36. Write a program to find power.
*/

#include<iostream>
using namespace std;
int main()
{
    int p,b;
    cout<<"Enter the base: ";
    cin>>b;
    cout<<"Enter the power: ";
    cin>>p;
    int ans =1;
    for(int i=p; i>0; i--)
    {
        ans = ans*b;
    }
    cout<<ans;
}

/*
Enter the base: 5
Enter the power: 3
125
*/