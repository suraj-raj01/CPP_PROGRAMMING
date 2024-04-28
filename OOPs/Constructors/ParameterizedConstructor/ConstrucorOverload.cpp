/*
Constructor Overloading:-
Constructor can be overload in a similar way as function overloading.
*/

#include <iostream>
using namespace std;

class Main
{
public:
    Main(int a, int b)
    {
        cout << "Product is : " << a * b << endl;
    }
    Main()
    {
        cout << "This is the Constructor Overloading\n";
    }
};

int main()
{
    int a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number ";
    cin >> b;
    Main obj(a, b);
    Main obj1;
}