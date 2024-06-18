#include<iostream>
using namespace std;
#include<vector>
int main()
{
    vector<int>a{2,3,4,2};
    vector<int>b{3,4};
    int s1,s2;
    s1=s2=0;
    for(int i=0; i<a.size(); i++)
    {
        s1=s1*10+a[i];
    }
    for(int i=0; i<b.size(); i++)
    {
        s2=s2*10+b[i];
    }
    cout<<s1+s2;
}