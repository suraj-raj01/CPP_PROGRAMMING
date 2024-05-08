/*
WAP to check the given number is prime or not using parameterized Constructors.
*/

#include<iostream>
using namespace std;

class Prime{
    public:
    Prime(int n)
    {
        int c=0;
        int k = n;
       for(int i=n; i>=1; i--)
       {
        if(k%i==0)
        {
           c++;
        }
       }
       if(c==2)
       {
        cout<<"Prime";
       }
       else{
        cout<<"not Prime";
       }
    }
};

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    Prime obj(n);
}