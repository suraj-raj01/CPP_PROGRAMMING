// WAP to display sum,subtraction and multiply using gybrid inheritance?

#include<iostream>
using namespace std;

class Main{
    public:
    void msg()
    {
        cout<<"=====================\n";
        cout<<"Show Addition\nSubtraction\nMultiplication\n";
        cout<<"=====================\n";
    }
};
class ADD:public Main
{
    public:
    void add(int x, int y)
    {
        cout<<"Sum is: "<<x+y<<endl;
    }
};
class SUB:public Main{
    public:
    void sub(int x, int y)
    {
        cout<<"Subtraction is: "<<x-y<<endl;
    }
};
class MUL:public Main{
    public:
    void mul(int x, int y)
    {
        cout<<"Multiplication is: "<<x*y;
    }
};
class RESULT:public ADD,public SUB, public MUL{

};

int main()
{
   Main m;
   m.msg();
   RESULT r;
   int x,y;
   cout<<"Enter the first number: ";
   cin>>x;
   cout<<"Enter the second number: ";
   cin>>y;
   r.add(x,y);
   r.sub(x,y);
   r.mul(x,y);
}