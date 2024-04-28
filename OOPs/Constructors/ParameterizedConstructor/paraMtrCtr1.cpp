#include<iostream>
using namespace std;

class Main{
    int a,b;
    public:
    Main(int a, int b)  // : a{a},b{b}
    {
        this->a;
        this->b;
        cout<<a+b<<endl;
    }
    Main()
    {
        cout<<"Parameterized Constructors!!\n";
    }
    Main(int x, int y, string s)
    {
        a = x;
        b = y;
        cout<<"multi: "<<a*b<<endl;
        cout<<s;
    }
};
int main()
{
   Main obj;
   Main obj1(10,20);
   Main obj2(10,20,"suraj");
}