/*
Hybrid inheritance is the combinataion is the different inheritance.always we create an object 
of child class and we can make a class as a virtual when we inherit the parent class
*/

#include<iostream>
using namespace std;

class RBI{
    public:
    void msg()
    {
        cout<<"RBI\n";
    }
};
class SBI:virtual public RBI{
    public:
    void smsg()
    {
        cout<<"SBI\n";
    }
};
class AXIS:virtual public RBI{
    public:
    void amsg()
    {
        cout<<"AXIS\n";
    }
};
class CUST: public SBI, public AXIS{
    public:
    void cmsg()
    {
        cout<<"CUSTOMER\n";
    }
};

int main()
{
   CUST c;
   c.smsg();
   c.amsg();
// c.AXIS::msg();   // without Virtual
   c.msg();  // with Virtual
}