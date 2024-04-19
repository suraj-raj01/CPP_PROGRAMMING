#include<iostream>
using namespace std;

class RBI
{
    public:RBI(int a=0)
    {
        cout<<"Enter the number: ";
        cin>>a;
        cout<<a<<endl;
    }
};
class SBI:public RBI
{
    public:SBI()
    {
        cout<<"Bottom\n";
    }
};

int main()
{
    SBI b;
}