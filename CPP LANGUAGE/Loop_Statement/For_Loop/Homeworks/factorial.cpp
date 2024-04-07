//WAP to print factorial of a number.

#include<iostream>
using namespace std;
int main()
{
    int n,fact;
    cout<<"Enter the number: ";
    cin>>n;
    fact=1;
    for(int i=n; i>=2; --i){
        fact=fact*i;
    }
    cout<<"factorial is: "<<fact;
    return 0;
}