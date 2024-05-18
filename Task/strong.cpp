#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int k = n;
    int count=0;
    int sum=0;
    while(k!=0)
    {
        if(n%k==0)
        {
            count++;
            sum+=n;
        }
        k--;
    }
    if(n==sum){
        cout<<"Strong Number";
    }
    else{
        cout<<"Not a Strong number";
    }
}