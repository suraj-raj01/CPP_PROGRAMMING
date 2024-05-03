#include<iostream>
using namespace std;
#include<cstring>
int main()
{
    char name[]="SURAJ KUMAR RAJAK";
    int len = strlen(name);
    for(int i=0; i<len; i++)
    {
        cout<<name[i];
    }
    cout<<"\nSize of name: "<<sizeof(name);
}