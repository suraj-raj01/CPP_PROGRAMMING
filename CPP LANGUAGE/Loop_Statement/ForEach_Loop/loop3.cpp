#include<iostream>
using namespace std;
#include<string>
#include<cstring>
int main()
{
    string str[] = {"Suraj","Rajan","Hariom","Bittu","Rahul"};
    for(string val : str)
    {
        cout<<val<<"\n";
    }
    cout<<sizeof(str);
}