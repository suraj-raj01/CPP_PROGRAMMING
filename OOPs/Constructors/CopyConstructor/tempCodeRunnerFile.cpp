#include<iostream>
using namespace std;

class Main{
    int a;
    int *p;
    public:
    Main()
    {
       a=0;
       p=new int;
       p=0;
    }
    Main(int x, int y)
    {
       a = x;
       p = new int;
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
        cout<<"p : "<<*p<<endl;
    }
};

int main()
{
  Main obj(20,10);
  Main obj1(obj);  // copy constructor explicitly 
  // Main obj1 = obj;  // copy constructor implicitly
  obj.show();
  obj1.show();
  // cout<<"After Updation"<<endl;
  obj1.update();
  obj1.show();
  obj.show();
}