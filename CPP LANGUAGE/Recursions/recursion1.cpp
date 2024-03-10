#include<iostream>
using namespace std;

void rec(int n)
{
    if(n==0)
    {
        return;
    }
    // Head Recursion
    //cout<<n<<"  ";
    rec(n-1);
    // Tail Recursion
    cout<<n<<"  ";
}

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    rec(n);
}
