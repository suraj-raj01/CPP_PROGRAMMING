#include<iostream>
using namespace std;

int sum(int n)
{
    if(n==1)
    {
        return 1;
    }
    
    int sumNm1 = sum(n-1);
    int sum = n + sumNm1;
    return sum;
}

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Sum is: "<<sum(n);
}