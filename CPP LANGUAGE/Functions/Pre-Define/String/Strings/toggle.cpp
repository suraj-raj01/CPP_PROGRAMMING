// WAP to print toggle of a string.

#include<iostream>
using namespace std;
#include<cstring>
int main()
{
    char c[10];
    cout<<"Enter your name: ";
    cin>>c;
    int n = strlen(c);
    for(int i=0; i<n; ++i)
    {
        if(c[i]>=65 && c[i]<=90)
        {
            c[i] = c[i]+32;
        }
        else if(c[i]>=97 && c[i]<=122)
        {
            c[i] = c[i]-32;
        }
    }
    cout<<c;
}


/*

OUTPUT:
Enter your name: sUrAj
SuRaJ

*/