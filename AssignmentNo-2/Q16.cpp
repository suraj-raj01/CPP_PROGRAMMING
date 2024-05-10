/*
16. Write a program to enter a number and print its reverse.
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int res = 0;
    while(n>0)
    {
        res = n%10; 
        n = n/10;
        cout<<res;
    }
}

/*
Enter a number: 134568
865431
*/