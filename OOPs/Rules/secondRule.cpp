/*
Second Rule:-
Function declare inside a class but define outsite of a class.
*/

#include<iostream>
using namespace std;

class show{
    int c;
    public:void sum(int a, int b);
};

void show::sum(int a, int b)  // scope resolution Operator -> ::
{
    c=a+b;
    cout<<c;
}

int main()
{
    show obj;
    obj.sum(10,20);
}