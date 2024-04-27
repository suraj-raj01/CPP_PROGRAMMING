#include<iostream>
using namespace std;

class A{
  int n=10;
  friend void cmp1(A &a);
};
void cmp1(A &a)
{
    cout<<a.n;
}

class B{
  int m=20;
  friend void cmp2(B &b);
};
void cmp2(B &b)
{
    cout<<b.m;
}

int main()
{
  A cm1;
  cmp1(cm1);
  cout<<endl;
  B cm2;
  cmp2(cm2);
}