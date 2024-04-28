#include <iostream>
using namespace std;

class
{
    int a, b;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }
    void getData()
    {
        cout << "Sum is: " << a + b;
    }
} obj1, obj2;
int main()
{
    obj1.setData(10, 20);
    obj2.setData(20, 30);
    obj1.getData();
    cout << "\n";
    obj2.getData();
}