// Pointer to Pointer

#include<iostream>
using namespace std;
int main()
{
  int a = 90;
  cout<<"Value of a = "<<a<<endl;
  cout<<"Address of a "<<&a<<endl;
  int *ptr = &a;
  cout<<"Address of ptr "<<&ptr<<endl;
  cout<<"Address of a "<<ptr<<endl;
  cout<<"Value of a "<<*ptr<<endl;

  int **ptr2 = &ptr;
  cout<<"Address of ptr2 "<<&ptr2<<endl;
  cout<<"Address of ptr "<<ptr2<<endl;
  cout<<"Value of ptr that holds the address of ptr = "<<*ptr<<endl;
  cout<<"Value of a "<<**ptr2<<endl;
}