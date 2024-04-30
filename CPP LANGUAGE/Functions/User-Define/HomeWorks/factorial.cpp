// WAP to generate the factorial of any number using function.

#include<iostream>
using namespace std;

void fact(int n)
{
    int factorial = 1;
    for(int i=1; i<=n; ++i)
    {
        factorial *= i;
    }
    cout<<factorial;
}

int main()
{
    int n;

    cout<<"Enter the number to generate factorial: ";
    cin>>n;
    if(n<=0){
        cout<<"Invalid Number";
    }
    else
    {
    cout<<"factorial: ";
    fact(n);
    }
}
