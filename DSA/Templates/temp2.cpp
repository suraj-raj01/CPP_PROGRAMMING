// Class Based Task

#include<iostream>
using namespace std;
template <class x, class y>
class Cybrom{
    x a;
    y b;
    public:
    Cybrom(x x1, y y1)
    {
        a = x1;
        b = y1;
    }
    void show()
    {
        cout<<"\nnsum = "<<a+b;
    }
};

int main()
{
    Cybrom <double ,double>i(10.65,30.65);
    i.show();
}