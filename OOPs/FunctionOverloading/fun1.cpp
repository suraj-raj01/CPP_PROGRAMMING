/*
Function Overloading:- Same name with the different parameters called function overloading.
*/

#include<iostream>
using namespace std;

class overloading{
    public:
    void add(int a,int b)
    {
        cout<<a+b<<endl;
    }
    void add(int a,int b,int c)
    {
        cout<<a+b+c;
    }
};

int main()
{
   overloading obj;
   obj.add(10,20);
   obj.add(10,20,30);
}