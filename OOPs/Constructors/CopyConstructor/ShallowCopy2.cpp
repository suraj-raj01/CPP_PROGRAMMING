#include<iostream>
using namespace std;

class Main{
    int a;
    int *p;
    public:Main()
    {
       a=0;
       p=new int;
       p=0;
    }

Main(Main &obj)
{
    a=obj.a;
    p=new int;
    *p = *(obj.p);
}

    Main(int x, int y)
    {
       a = x;
       p = &y;
    }
    void update()
    {
        a=a+1;
        *p=*p+1;
    }
    void show()
    {
        cout<<"a : "<<a<<endl;
        cout<<"b : "<<*p<<endl;
    }
};

int main()
{
  Main obj(20,10);
  obj.show();
  Main obj1(obj);
  obj1.update();
  obj1.show();
  obj.show();
}