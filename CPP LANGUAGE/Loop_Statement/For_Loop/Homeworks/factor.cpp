// WAP to print factor from 1 to user input

#include<iostream>
using namespace std;
int main()
{
    int n,count=1;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"The factor of "<<n<<" = ";
    for(int i=1; i<=n/2; i++)
    {
        if(n%i == 0)
        {
            cout<<count<<"\t";
        }
        count++;
    }
}