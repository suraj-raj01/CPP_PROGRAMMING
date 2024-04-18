// Diamond problems come into the multiple inheritance.
/*
int multiple inheritance atleast we use three different classes here the child class
inherits the properties of multiple classes all together. but they are may be
a diamond problem in multiple inheritance if and only if the previous classes
having the same signature of functions.
*/

#include<iostream>
using namespace std;
class tenth{
   public:void result()
   {
    cout<<"firs div\n";
   };
};
class twelve
{
    public:void sec()
    {
        cout<<"second div\n";
    };
};
class graduate
{
    public:
    void grad()
    {
        cout<<"Graduate\n";
    }
};
class friends: public tenth, public twelve, public graduate
{
   public: void show()
   {
    cout<<"Friends\n";
   }
};
int main()
{
 friends f;
 f.show();
 f.result();
 f.sec();
 f.grad();
}