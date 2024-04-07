// Static :- it is use for memory management and it create single copy.

#include<iostream>
using namespace std;

class base{
    public: static int n;
    public: static void show()
    {
        cout<<"Static method";
    }
};

int base::n=20;
int main()
{
    base b;
    base::show();
    b.n;
}
