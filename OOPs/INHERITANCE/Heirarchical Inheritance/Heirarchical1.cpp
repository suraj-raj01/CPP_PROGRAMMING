#include<iostream>
using namespace std;

class Main{
    public:
    int x,y;
    void getData()
    {
        cout<<"Enter the first number: ";
        cin>>x;
        cout<<"Enter the second number: ";
        cin>>y;
    }
};
class SUM:public Main{
    public:void sum()
    {
        cout<<"Sum is: "<<x+y<<endl;
    }
};
class MUL:public Main{
    public:void mul()
    {
        cout<<"Mul is: "<<x*y<<endl;
    }
};

int main()
{
   SUM s;
   MUL m;
   s.getData();
   s.sum();
   m.getData();
   m.mul();
}