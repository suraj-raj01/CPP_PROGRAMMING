/*
Second Rule:-
Function declare inside a class but define outsite of a class.
*/

#include<iostream>
using namespace std;

class show{
    int c;
    public:void sum(int a, int b);  // Addition
    void mul(int a,int b);   // multiplication
};

void show::sum(int a, int b)  // scope resolution Operator -> ::
{
    c=a+b;
    cout<<"Sum is : "<<c;
}

void show::mul(int x,int y)
{
    cout<<"Product is : "<<x*y;
}

int main()
{
    show obj;
    obj.sum(10,20);
    cout<<"\n";
    obj.mul(10,20);
}