/*

What is Constructor:-

constructor is also called special type of function, the constructor name is 
similar to the class name.
constructor never return type, constructor is used to allocate memory of an
object at run time.


There are Three types of constructor:-

1) Default or Not Parameterized Constructor.
2) Parameterized Constructor.
3) Copy Constructor.
   a). Shallow Copy
   b). Deep Copy


Note : By-default the access modifier of constructor is public.

1). Default Constructor:-
    in a default constructor we never use any parameters, and constructor
    called implicitly whenever we create an object of it.

2). Parameterized Constructor:-
    Parameterized constructors in C++ are constructors that accept parameters. 
    They enable programmers to create objects with specific properties and 
    attributes by passing arguments.

3). Copy Constructor:-


Constructor OverLoading:-
If a class having more than one constructor with different parameters or 
without parameters is called constructor overloading.

Example of Constructor OverLoading:-

#include<iostream>
using namespace std;

class Main{
    public:
    Main(int a, int b)
    {
        cout<<"Sum is: "<<a+b<<endl;
    }
    Main()
    {
        cout<<"Constructor Overloading\n";
    }
};

int main()
{
   Main obj(4,8);
   Main obj1;
}

*/