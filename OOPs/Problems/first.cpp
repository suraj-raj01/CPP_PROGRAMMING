/*
1. WAP to generate table and factorial of same number using multiple function.
*/

#include<iostream>
using namespace std;

class MultiFun{
    int i,fact=1;
    public:
    void table(int n)
    {
        for(i=1; i<=10; i++)
        {
            cout<<n<<" * "<<i<<" : "<<n*i<<endl;
        }
    }
    void factorial(int n)
    {
       for(i=1; i<=n; i++)
       {
        fact *=i;
       }
       cout<<"Factorial is : "<<fact;
    }
};

int main()
{
   MultiFun obj;
    int n;
   cout<<"Enter the number: ";
   cin>>n;
   obj.table(n);
   obj.factorial(n);
}