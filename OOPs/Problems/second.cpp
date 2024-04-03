/*
2. WAP to generate square of given number using function overloading.
*/

#include<iostream>
using namespace std;

class OverLoad{
    int n;
    public:
    void square(int x)
    {
       n = x*x;
    }
    void square()
    {
        cout<<"Square is: "<<n;
    }
};

int main()
{
   OverLoad sqr;
   int n;
   cout<<"Enter the number: ";
   cin>>n;
   sqr.square(n);
   sqr.square();
}