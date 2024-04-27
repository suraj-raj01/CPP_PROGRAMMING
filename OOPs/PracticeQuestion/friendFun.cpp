#include<iostream>
using namespace std;
class B;
class A{
  int n=10;
  friend void cmp(A obj, B obj1);
};


class B{
  int m=20;
  friend void cmp(A obj, B obj1);
};
void cmp(A obj, B obj1)
{
  if(obj.n>obj1.m)
  {
    cout<<obj.n;
  }
  else{
    cout<<obj1.m;
  }
}

int main()
{
  A a;
  B b;
  cmp(a,b);
}