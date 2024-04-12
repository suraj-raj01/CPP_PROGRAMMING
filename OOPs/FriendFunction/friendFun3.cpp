#include<iostream>
using namespace std;

class Friend{
    private:
    string name;
    int age;
    int salary;
    public:void info()
    {
       cout<<"information\n";
    }
    friend void info(Friend &obj);
};

    void info(Friend &obj)
    {
         obj.info();
         obj.name = "SURAJ";
         obj.salary = 30000;
         obj.age = 25;
         cout<<"Name : "<<obj.name<<"\n"<<"Salary : "<<obj.salary<<"/-\n"<<"Age : "<<obj.age;
    }

int main()
{
   Friend obj;
   info(obj);
}