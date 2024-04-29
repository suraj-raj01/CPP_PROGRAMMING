// Unary Operator Overloading Example.

#include <iostream>
using namespace std;

class Main
{
    int a = 0;

public:
    void operator++()
    {
        a = a + 1;
        cout << a << "\n";
    }
    void operator--()
    {
        a = a - 1;
        cout << a << "\n";
    }
};

int main()
{
    Main obj;
    ++obj;
    --obj;
}