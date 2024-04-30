#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number: ";
    cin>>n;
    while(n!=0)
    {
        if(n&1)
        {
            cout<<n;
        }
        n = n>>1;
    }
}