// WAP to display the string in ascending order.

#include<iostream>
using namespace std;
#include<cmath>
#include<cstring>
int main()
{
    char ch[10];
    cout<<"Enter your name: ";
    cin>>ch;
    int len = strlen(ch);
    for(int i=0; i<len; ++i)
    {
        for(int j=0; j<len-i-1; j++)
        {
            if(ch[j]>ch[j+1])
            {
                swap(ch[j],ch[j+1]);
            }
        }
    }
    cout<<ch<<endl;
    cout<<strupr(ch);
}

/*
#include<iostream>
using namespace std;
#include<cmath>
#include<cstring>
int main()
{
   char ch[10];
   cout<<"Enter your name: ";
   cin>>ch;
   int len = strlen(ch);
   for(int i=0; i<len; i++)
   {
    for(int j=0; j<len-i-1; j++)
    {
        if(ch[j]>ch[j+1])
        {
            swap(ch[j+1],ch[j]);
        }
    }
   }
    cout<<ch;
}
*/