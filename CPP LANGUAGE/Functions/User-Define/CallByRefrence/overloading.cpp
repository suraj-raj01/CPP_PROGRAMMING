#include <iostream>
using namespace std;
void add(int a, int b)
{
    cout << "Sum is: " << a + b << "\n";
}

void add(int a, int b, int c)
{
    cout << "Sum is: " << a + b + c;
}

int main()
{
    add(10, 20);
    add(30, 20, 30);
}
