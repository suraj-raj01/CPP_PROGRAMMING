// WAP to display the string in ascending order.

#include<iostream>
using namespace std;
#include<cmath>
#include<cstring>
int main()
{
    char ch[20];
    char count;
    cout<<"Enter your String: ";
    cin>>ch;
    int len = strlen(ch);
    for(int i=0; i<len; i++)
    {
        for(int j=0; j<len-i-1; ++j)
        {
            if(ch[j]>ch[j+1])  // for descending -> if(ch[j] < ch[j+1])
            {
                // count = ch[j+1];
                // ch[j+1] = ch[j];
                // ch[j] = count;
                swap(ch[j],ch[j+1]);
            }
        }
    }
    cout<<ch;
}
