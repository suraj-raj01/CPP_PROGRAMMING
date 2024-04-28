/*
MULTI-CLASSES -> When we create more than one class in one program thats
                 called Multi class
*/
#include <iostream>
using namespace std;

class class1
{
public:
    void show()
    {
        cout << "Class - 1";
    }
};

class class2
{
public:
    void show()
    {
        cout << "Class - 2";
    }
};

class class3
{
public:
    void show()
    {
        cout << "Class - 2";
    }
};

int main()
{
    class1 c1;
    c1.show();

    cout << "\n";

    class2 c2;
    c2.show();

    cout << "\n";

    class3 c3;
    c3.show();
}