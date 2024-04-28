/*

If the class variable name and function variable name is same, then
we use this pointer (this->)
this pointer belong current class variable.

*/

#include<iostream>
using namespace std;

class Main{
    int a,b;
    public: 
    Main(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void show()
    {
        cout<<"Value of a : "<<a<<endl;
        cout<<"Value of b : "<<b<<endl;
    }
};

int main()
{
    Main obj(20,10);
    obj.show();
}