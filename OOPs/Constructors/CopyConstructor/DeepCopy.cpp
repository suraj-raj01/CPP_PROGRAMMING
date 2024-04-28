// #include<iostream>
// using namespace std;

// class Main{
//     int a;
//     int *p;
//     public:Main()
//     {
//        a=0;
//        p=new int;
//        p=0;
//     }

// Main(Main &obj)  // own copy or deep copy
// {
//     a=obj.a;
//     p=new int;
//     *p = *(obj.p);
// }

//     Main(int x, int y)
//     {
//        a = x;
//        p = new int;
//        p = &y;
//     }
//     void update()
//     {
//         a=a+1;
//         *p=*p+1;
//     }
//     void show()
//     {
//         cout<<"a : "<<a<<endl;
//         cout<<"p : "<<*p<<endl;
//     }
// };

// int main()
// {
//   Main obj(20,10);
//   obj.show();
//   Main obj1(obj); // shallow copy
//   obj1.show();
//   obj1.update();
//   obj1.show();
//   obj.show();
// }

#include<iostream>
using namespace std;

class DEEP
{
   int a;
   int *p;
   public:
   DEEP()
   {
      a = 0;
      p = new int;
      p = 0;
   }

DEEP(DEEP &obj)
{
a = obj.a;
p = new int;
*p = *(obj.p);
}

DEEP(int x, int y)
{
a = x;
p = new int;
p = &y;
}

void update()
{
a = a+1;
*p = *p+1;
}

void show()
{
cout<<"a: "<<a<<endl;
cout<<"b: "<<*p<<endl;
}

};

int main()
{
 DEEP d1(10,20);
 d1.show();
 DEEP d2(d1);
 d2.show();
 d1.update();
 d1.show();
 d2.show();
}