#include<iostream>
using namespace std;

class RBI{
    public:RBI()
    {
        cout<<"WELCOME TO RBI\n";
    }
};
class SBI:public RBI{
    public:SBI()
    {
        cout<<"WELCOME TO SBI\n";
    }
};
class CUSTOMER:public SBI{
    public:CUSTOMER()
    {
        cout<<"WELCOME CUSTOMER\n";
    }
};

int main()
{
   CUSTOMER c;
}