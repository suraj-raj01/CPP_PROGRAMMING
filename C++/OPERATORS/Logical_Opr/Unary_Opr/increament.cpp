//Increament Operator

#include<iostream>
using namespace std;
int main(){
    /*
    int a =10;
    cout<<a<<endl;
    //post-fix
    a++;
    cout<<a<<endl;
    //pre-fix
    cout<<++a;
    */
   int a=0,b=2,c;
   c=a++;
   b=++c;
   a=++b;
   /*
    c=a++;  --> c=0, a=1
    b=++c;  --> b=1, c=1
    a=++b;  --> a=2, b=2
   */
   cout<<"a = "<<a<<" b = "<<b<<" c = "<<c<<endl;

   int x=30, y=20,z=19;
   y=z++;
   x=++y;
   z=y++;
   x=z++;
   /*
    y=z++;  --> y=19, z=20
    x=++y;  --> x=20, y=20
    z=y++;  --> z=20, y=21
    x=z++;  --> x=20, z=21
   */
   cout<<"x = "<<x<<endl;
   cout<<"y = "<<y<<endl;
   cout<<"z = "<<z;
}