/*
23. Write a program to calculate factorial of a number.
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int res=1;
    for(int i=n; i>0; i--)
    {
        res*=i;
    }
    cout<<res;
}

/*
Enter the number: 5
120
*/