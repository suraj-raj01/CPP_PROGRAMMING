/*
Anonymous Class:-
A class with no name provided is known as an anonymous class in c++.
*/

#include<iostream>
using namespace std;

class{
    int n;
    public:
    void setVal(int a)
    {
       this -> n = a;  // n = a;
    }
    void printVal()
    {
        cout<<"value is: "<<this -> n;
    }
} obj;

int main()
{
   obj.setVal(20);
   obj.printVal();
}