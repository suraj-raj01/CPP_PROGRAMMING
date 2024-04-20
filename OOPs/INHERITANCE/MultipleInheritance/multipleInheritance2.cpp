#include<iostream>
using namespace std;

class RBI{
    public:void RBIMSG()
    {
        cout<<"WELCOMES TO RBI\n";
    }
};
class SBI{
    public:void SBIMSG()
    {
        cout<<"WELCOMES TO SBI\n";
    }
};
class CUSTOMER:public RBI,public SBI{
    public: void CUSTOMER_MSG()
    {
        cout<<"WELCOME CUSTOMERS!!\n";
    }
};

int main()
{
  CUSTOMER c;
  c.CUSTOMER_MSG();
  c.SBIMSG();
  c.RBIMSG();
}