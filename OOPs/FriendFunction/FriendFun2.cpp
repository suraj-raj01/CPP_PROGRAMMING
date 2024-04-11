#include<iostream>
using namespace std;

class Main{
    string name;
    int age;
    string location;
    public:void show()
    {
        cout<<"SHOW INFORMATION\n";
    }
    friend void info(Main &t);
};

    void info(Main &t)
    {
       t.show();
       t.name = "SURAJ KUMAR";
       t.age = 20;
       t.location = "BIHAR";
       cout<<"Name: "<<t.name<<endl;
       cout<<"Age: "<<t.age<<endl;
       cout<<"Location: "<<t.location;
    }

int main()
{
   Main t;
   info(t);
}