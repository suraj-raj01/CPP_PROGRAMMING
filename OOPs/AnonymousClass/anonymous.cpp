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
        // using this pointer keyword
       this -> n = a;  // n = a;
    }
    void printVal()
    {
        cout<<"value is: "<<this -> n;
    }
} obj;

int main()
{
   int n;
   cout<<"Enter the number: ";
   cin>>n;
   obj.setVal(n);
   obj.printVal();
}