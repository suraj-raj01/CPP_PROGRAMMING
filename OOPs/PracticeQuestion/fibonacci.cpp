/*
WAP to print Fibonacci Series using constructor
*/

#include<iostream>
using namespace std;

class FIB
{
    int a,b;
    public:
    FIB()
    {
        a = -1;
        b = 1;
    }
    void fibseries(int n)
    {
        int next;
        for(int i=0; i<n; i++)
        {
            next = a+b;
            cout<<next<<"\t";
            a = b;
            b = next;
        }
    }

};

int main()
{
    FIB f;
    int n;
    cout<<"Enter the range: ";
    cin>>n;
    f.fibseries(n);
}