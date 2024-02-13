#include<iostream>
using namespace std;
int main()
{
    for(char i='A'; i<='C'; i++)
    {
        for(char j='A'; j<=i; j++)
        {
            cout<<j<<" ";
        }
        cout<<"\n";
    }
}

/*

A 
A B 
A B C 

*/