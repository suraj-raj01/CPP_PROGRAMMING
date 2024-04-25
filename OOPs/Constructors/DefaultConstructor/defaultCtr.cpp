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


/*
#include<iostream>
using namespace std;

class MUL{
    int x,y;
    public:
    MUL()
    {
        x=10;
        y=20;
        cout<<"mul is: "<<x*y;
    }
};
int main()
{
   MUL obj;
}
*/