#include<iostream>
using namespace std;
#include<cstring>
int main()
{
    char c[10];
    int len;
    cout<<"Enter your name: ";
    cin>>c;
    len = strlen(c);
    for(int i=0; i<len; ++i)
    {
        c[i] = c[i]+ 32;
    }
    cout<<c;
}