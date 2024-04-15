#include<iostream>
using namespace std;

class Main{
    int x;
    public:
    Main(int x=8):x{x}
    {

    }
    public:
    void show()
    {
        cout<<x;
    }
};

int main()
{
//    Main j;
   Main j(10);
   j.show();
}