#include<iostream>
using namespace std;

class SBI{
    public:virtual void BALANCE()
    {
        cout<<"Welcome SBI\n";
    }
};
class AXIS:public SBI{
    public:void BALANCE()
    {
        cout<<"Welcome AXIS\n";
    }
};

int main()
{
    AXIS obj;
    SBI &s=obj;
    s.BALANCE();
}