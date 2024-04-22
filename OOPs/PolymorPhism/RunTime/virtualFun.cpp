#include<iostream>
using namespace std;

class SBIATM{
    public:
    virtual void BALANCE()
    {
        cout<<"WELCOME SBI!!\n";
    }
    void axShow()
    {
        cout<<"SBI MSG!!\n";
    }
};
class AXIS:public SBIATM{
    public:
    virtual void BALANCE()
    {
        cout<<"WELCOME AXIS!!\n";
    }
    public:void axShow()
    {
        cout<<"AXIS SHOW!!\n";
    }
};
class PNB:public SBIATM{
    public:
    void BALANCE()
    {
        cout<<"WELCOME PNB!!\n";
    }
};

int main()
{
   SBIATM *s = new PNB();  // Pointer Object
   s->axShow();
   s->BALANCE();
   SBIATM s1;   // Normal Object prefer to own class first
   s1.BALANCE();
   SBIATM *s2 = new AXIS();  // Pointer Object
   s2->BALANCE();
}