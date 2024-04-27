#include<iostream>
using namespace std;

class Main
{
    static int n;
    public:
    Main()
    {
      n++;
    }
    void show()
    {
       cout<<n;
    }

};
int Main::n=0;

int main()
{
   Main obj1;
   Main obj2;
   Main obj3;
   Main obj4;
  obj4.show();
}