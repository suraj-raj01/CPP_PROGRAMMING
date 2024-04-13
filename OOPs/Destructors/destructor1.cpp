/*
Destructor:-
Destructor is used to deallocate the memory of an object it calles implicitly
the destructor is define by using tild(~) symbol along with class name and 
without using any parameter.
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