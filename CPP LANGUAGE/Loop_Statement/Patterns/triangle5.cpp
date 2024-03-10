#include<iostream>
using namespace std;
int main()
{
    for(char r='A'; r<='C'; r++)
    {
        for(char c='A'; c<=r; c++)
        {
            cout<<c<<" ";
        }
        cout<<"\n";
    }
}

/*

A 
A B 
A B C 

*/