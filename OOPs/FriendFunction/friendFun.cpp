#include<iostream>
using namespace std;

class Main{
    int a,b;
    void show()
    {
        cout<<"Main Class\n";
    }
    friend void cybrom(Main &t); // it can be public or private
};
   void cybrom(Main &t)
   {
    t.show();
    t.a = 20;
    t.b = 30;
    cout<<t.a+t.b;
   }

int main()
{
   Main ob;
   cybrom(ob);
   /*
   Main t;
   cybrom(t);
   */
}