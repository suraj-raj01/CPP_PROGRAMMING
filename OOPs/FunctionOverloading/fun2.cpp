#include <iostream>
using namespace std;
class overloading
{
    int c;

public:
    void show(int a, int b)
    {
        c = a + b;
    }
    void show()
    {
        cout << "Sum is : " << c;
    }
};
int main()
{
    overloading obj;
    obj.show(20, 10);
    obj.show();
}