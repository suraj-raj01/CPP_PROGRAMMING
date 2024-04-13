/*
Operator Overloading :-

there are two types of Operator overloading.
a)UNARY OPERATOR OVERLOADING
b)BINARY OPERATOR OVERLOADING
*/

// Unary Operator Overloading Example :-

#include<iostream>
using namespace std;

class Main{
    int a = 0;
    public:void operator ++()
    {
        a = a+2;
        cout<<"a : "<<a<<"\n";
    }
    void operator --()
    {
        a = a-1;
        cout<<"a : "<<a<<"\n";
    }
};

int main()
{
    Main obj;
    ++obj;
    --obj;
}