#include<iostream>
using namespace std;

// class show{
//   int a;
//   double d;
//   char c;
// };

class show{

    // data member --> variable
    // member function --> functions.
    int a,b;
    public:void sum()
    {
        a=10,b=20;
        cout<<a+b<<"\n";
    }
    void hello()
    {
        cout<<"Hello!!";
    }
};

int main()
{
//   show obj;
//   cout<<sizeof(obj);
    show obj;
    obj.sum();
    obj.hello();
}