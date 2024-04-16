/*
Multilevel Inheritance:-
*/
/*
#include<iostream>
using namespace std;

class reward
{
   protected:void hacked()
   {
    cout<<"your system got hacked\n";
   }
};
class sbi:public reward{
    public:void prize()
    {
        hacked();
        cout<<"$10000\n";
    }
};
class customer: public sbi{
    public: void cust()
    {
        cout<<"Welcome Customer!!\n";
    }
};

int main()
{
   customer obj;
   obj.cust();
   obj.prize();
}
*/

/*
Multilevel Inheritance:-
*/

#include<iostream>
using namespace std;

class reward
{
   protected:void prize()
   {
    cout<<"your system got hacked\n";
   }
};
class sbi:public reward{
    public:void prize()
    {
        cout<<"$10000\n";
    }
};
class customer: public sbi{
    public: void cust()
    {
        prize();
        cout<<"Welcome Customer!!\n";
    }
};

int main()
{
   customer obj;
   obj.cust();
   obj.prize();
}