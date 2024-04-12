/*
1. WAP to generate table and factorial of same number using multiple function.
*/

#include<iostream>
using namespace std;

class MultiFun{

    public:
    void table(int n)
    {
        for(int i=1; i<=10; i++)
        {
            cout<<n<<" * "<<i<<" : "<<n*i<<endl;
        }
    }
    
    void factorial(int n)
    {
       int fact  = 1;
       for(int i=2; i<=n; i++)
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