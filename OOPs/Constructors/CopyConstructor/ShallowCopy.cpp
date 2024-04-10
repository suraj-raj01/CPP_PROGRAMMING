/*
Copy Constructor:-
a) Shallow Copy
b) Deep Copy
   i) implicitly assignment copy Constructor
   ii) Calling copy Constructor explicitly
*/

#include<iostream>
using namespace std; 

class Main{
    int a,b;
    public: Main(int x, int y)
    {
        a = x;
        b = y;
    }
    Main()
    {
        a = 20;
    }
    void show()
    {
        cout<<"value of a : "<<a<<endl;
        cout<<"valued of b : "<<b<<endl;
    }
    void display()
    {
        cout<<a;
    }
};

int main()
{
// Explicitly copy Constructor
   Main obj(20,30);
   Main obj1(obj);   // Main obj1 = obj;
   obj1.show();

// Implicitly Assignement copy Constructor
   Main z1;
   Main z2;
   z2 = z1;
   z2.display();
}