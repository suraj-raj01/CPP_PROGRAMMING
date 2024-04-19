/*
Heirarchical Inheritance:-
In a heirarchical inheritance there is only one root(parent) class but multiple node 
classes and each node(child) class inherits the properties of root or parent class.
*/

#include<iostream>
using namespace std;
class rbi{
    public:void rbifun()
    {
        cout<<"RBI\n";
    }
};
class sbi:public rbi{
    public:void loan()
    {
        cout<<"SBI give 10%\n";
    }
};
class pnb:public rbi
{
    public:void loan()
    {
        cout<<"Vivek 12%\n";
    }
};
class axis:public rbi{
    public:void loan()
    {
        cout<<"15%\n";
    }
};
int main()
{
    sbi s;
    s.rbifun();
    s.loan();
    pnb p;
    p.rbifun();
    p.loan();
    axis a;
    a.rbifun();
    a.loan();
}