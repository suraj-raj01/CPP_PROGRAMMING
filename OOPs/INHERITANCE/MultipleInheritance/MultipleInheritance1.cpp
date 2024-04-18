#include<iostream>
using namespace std;

class dog{
    public:
    void bhaun()
    {
        cout<<"Dog speak Bhoun...\n";
    }
};
class cat{
    public:
    void meaun()
    {
        cout<<"Cat speak Meaun\n";
    }
};
class animal:public dog, public cat{
    public:void show(){
        cout<<"Animal Function!";
    }
};

int main()
{
    animal a;
    a.bhaun();
    a.meaun();
    a.show();
}