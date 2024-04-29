/*
Q.1 Write a Program illustrating how the constructors are implemented and the 
order in which they are called when the classes are inherited. Use three 
classes named alpha, beta, gamma such that alpha,beta are base class and gamma 
is derived class inheriting alpha & beta.
*/

#include<iostream>
using namespace std;

class alpha{
    public:
    void show1()
    {
        cout<<"Alpha\n";
    }
};
class beta{
    public:
    void show2()
    {
        cout<<"beta\n";
    }
};
class gama:public alpha, public beta
{
    public:
    void show3()
    {
        cout<<"Gama";
    }
};

int main()
{
    gama g;
    g.show1();
    g.show2();
    g.show3();
}