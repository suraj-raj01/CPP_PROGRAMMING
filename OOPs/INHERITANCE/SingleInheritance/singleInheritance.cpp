/*
Single Inheritance:-
In a Single Inheritance we have only two classes the first classis called parent class
and second class is called child class and the cild class inherits the properties of 
parent class.
*/

/*
#include<iostream>
using namespace std;

class rbi
{
   int a = 10;
//    public: a = 20;
   public:void show()
   {
    cout<<"a : "<<a<<endl;
   }
};
class sbi:public rbi{
    int a = 20;
    public:void print()
    {
        cout<<"a : "<<a<<endl;
    }
};

int main()
{
   sbi obj;
   cout<<"Size of sbi : "<<sizeof(obj)<<endl;
   obj.show();
   obj.print();
}

*/

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

int main()
{
    sbi obj;
    obj.prize();
}