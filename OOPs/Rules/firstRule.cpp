/*
We can create a function inside a class by two ways (Rule).
First Rule:-
Function declare and define inside a class.
*/

#include<iostream>
using namespace std;

class show{
    // data member --> variable
    int c;
    // member function --> functions.
    public:void sum(int a, int b)
    {
        cout<<a+b;
    }
};

int main()
{
    show obj;
    obj.sum(10,20);
}