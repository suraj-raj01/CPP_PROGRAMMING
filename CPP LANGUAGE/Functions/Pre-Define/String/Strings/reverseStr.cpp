#include<iostream>
using namespace std;
#include<cstring>
int main()
{
    char str[20];
    cout<<"Enter your name: ";
    cin>>str;
    char str2[20] = "";
    for(int i=0; str[i] != '\0'; i++)
    {
        str2[i] = str[i];
    }
    cout<<str2;
}
