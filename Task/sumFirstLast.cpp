// WAP to add first number and last number

#include<iostream>
using namespace std;
int main()
{
    int n,first,last;
    cout<<"Enter the number: ";
    cin>>n;
    last = n%10;
    first = n;
    while(first>=10)
    {
        first/=10;
    }
    cout<<"first: "<<first<<endl;
    cout<<"last: "<<last;
}