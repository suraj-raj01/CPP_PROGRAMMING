#include<iostream>
using namespace std;
int main()
{
    for(char r='a'; r<='c'; r++)
    {
        for(char j='a'; j<=r; j++)
        {
            cout<<j<<" ";
        }
        cout<<"\n";
    }
}

/*

a 
a b 
a b c 

*/