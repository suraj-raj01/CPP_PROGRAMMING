#include<iostream>
using namespace std;

class Main
{
    int n=0;
    public:
    void show()
    {
        n++;
        cout<<"HELLO !!\n";
    }
    void dis()
    {
        cout<<n;
    }
};

int main()
{
   Main obj1;
   Main obj2;
   Main obj3;
   Main obj4;
   obj1.show();
   obj2.show();
   obj3.show();
   obj4.show();
   Main a;
   a.dis();
}