#include<iostream>
using namespace std;

class Main{
    public: void show()
    {
        cout<<"Main Class\n";
    }
    Main()
    {
        cout<<"Constructor\n";
    }
};

int main()
{
   Main obj;
   obj.show();
}