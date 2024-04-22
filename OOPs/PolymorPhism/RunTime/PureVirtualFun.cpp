/*
Pure Virtual Function :-
if we declare a pure virtual function in any class by assigning 0 that class become abstract
class we can only create a pointer object of that class.

after making pure virtual function the class becomes abstract class
*/

#include<iostream>
using namespace std;

class RBI
{
    public:
    virtual void loan() = 0;
    void msg()
    {
        cout<<"Welcome To RBI\n";
    }
};
class SBI:public RBI{
    public:
    void loan()
    {
        cout<<"SBI : 5.45%\n";
    }
};
class AXIS:public RBI{
    public:
    void loan()
    {
        cout<<"Axis Bank : 6.12%\n";
    }
};

int main()
{
   RBI *rbi;
   SBI sbi;
   rbi=&sbi;
   rbi->loan();
   AXIS axis;
   rbi=&axis;
   rbi->loan();
}