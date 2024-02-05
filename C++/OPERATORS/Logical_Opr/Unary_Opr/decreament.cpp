//Decreament Operator

#include<iostream>
using namespace std;
int main(){
    /*
    int a =10;
    cout<<a<<endl;
    //post-fix
    a--;
    cout<<a<<endl;
    //pre-fix
    cout<<--a;
    */
   int a=10,b=2,c;
   c=a--;
   b=--c;
   a=--b;
   cout<<"a= "<<a<<"\nb= "<<b<<"\nc= "<<c<<endl;

   int x=30, y=20,z=19;
   y=z--;
   x=--y;
   z=y--;
   x=z--;
   cout<<"a= "<<x<<endl;
   cout<<"b= "<<y<<endl;
   cout<<"c= "<<z;
}