// #include <iostream>
// using namespace std;

// class Main
// {
//   static int n;

// public:
//   Main()
//   {
//     n++;
//   }
//   void show()
//   {
//     cout << n;
//   }
// };
// int Main::n = 0;

// int main()
// {
//   Main obj1;
//   Main obj2;
//   Main obj3;
//   Main obj4;
//   obj1.show();
// }

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
Main obj12;
Main obj3;
Main obj4;
Main obj5;
Main obj6;
obj1.show();
}