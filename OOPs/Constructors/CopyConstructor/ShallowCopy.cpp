/*
Copy Constructor:-
a) Shallow Copy
   i) implicitly assignment copy Constructor
   ii) Calling copy Constructor explicitly
b) Deep Copy
*/

#include<iostream>
using namespace std; 

class Main{
    int a,b;
    public: 
    Main(int x, int y)
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
        cout<<a<<"\n";
    }
};

int main()
{
// Explicitly copy Constructor
   Main obj(20,30);
   Main obj1(obj);   // Main obj1 = obj;
   obj1.show();
   obj.show();

// Implicitly Assignement copy Constructor
   Main z1;
   Main z2;
   z2 = z1;
   z1.display();
   z2.display();
}

