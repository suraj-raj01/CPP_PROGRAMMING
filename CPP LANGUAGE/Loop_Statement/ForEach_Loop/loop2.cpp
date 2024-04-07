#include<iostream>
using namespace std;
#include<cstring>
int main()
{
    char str[] = {'A','B','C','D','E','F'};
    for(char val : str)
    {
        cout<<val<<"\t";
    }
}