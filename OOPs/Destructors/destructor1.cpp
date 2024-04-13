/*
Destructor:-
Destructor is used to deallocate the memory of an object it calls implicitly.
the destructor is define by using tild(~) symbol along with class name and 
without using any parameter.

Destructor is an instance member function that is invoked automatically whenever an 
object is going to be destroyed. Meaning, a destructor is the last function that is 
going to be called before an object is destroyed.
*/

#include<iostream>
using namespace std;

class Main{
    public: void show()
    {
        cout<<"Example of Destructor!!\n";
    }
    ~Main()  // creating destructor
    {
        cout<<"Memory released!!\n";
    }
    Main()
    {
        cout<<"Memory allocated!!\n";
    }

};

int main()
{
  Main obj;
  obj.show();  
}