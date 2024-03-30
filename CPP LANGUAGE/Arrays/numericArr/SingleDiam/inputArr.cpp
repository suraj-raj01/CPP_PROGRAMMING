// WAP to take input array size and values.

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;
    char ch[n];
    for(int i=0; i<n; i++)
    {
        cin>>ch[i];
    }
    cout<<"Input values is: ";
    for(int j=0; j<n; ++j)
    {
        cout<<ch[j]<<"  ";
    }
}