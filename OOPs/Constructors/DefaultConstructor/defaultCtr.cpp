#include<iostream>
using namespace std;

class Main{
    int a,b;
    public: void show()
    {
        cout<<"Main Class\n";
    }
    Main()
    { 
        a=20;
        b=30;
        cout<<"Constructor\n";
        cout<<"a : "<<a<<endl;
        cout<<"b : "<<b;
    }
};

int main()
{
   Main obj;
//    obj.show();
}