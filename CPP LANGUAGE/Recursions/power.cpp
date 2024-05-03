#include<iostream>
using namespace std;

int pwr(int b, int p)
{
    if(b==0)
    {
        return b;
    }
    if(p==0)
    {
        return 1;
    }
    // int result = b*pwr(b,p-1);
    // return result;
    return b*pwr(b,p-1);
}

int main()
{
    int b,p;
    cout<<"Enter the base: ";
    cin>>b;
    cout<<"Enter the power: ";
    cin>>p;
    cout<<"Ans: "<<pwr(b,p);
}