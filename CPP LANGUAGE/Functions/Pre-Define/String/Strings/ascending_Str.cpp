// WAP to display the string in ascending order.

#include<iostream>
using namespace std;
#include<cstring>
int main()
{
    char c[10],ch;
    cout<<"Enter the name: ";
    cin>>c;
    char temp[10];
    int len = strlen(c);
    for(int i=0; i<len; i++)
    {
        for(int j=0; j<len-1; j++)
        {
            if(c[j]>c[j+1])
            {
                ch = c[j];
                c[j] = c[j+1];
                c[j+1] = ch;
            }
        }
    }
    cout<<c;
}