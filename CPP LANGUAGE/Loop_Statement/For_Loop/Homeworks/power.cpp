// WAP to print the power of number.

#include <iostream>
using namespace std;
int main()
{
    int b, p, result = 1;
    cout << "Enter the base number: ";
    cin >> b;
    cout << "Enter the exponent number: ";
    cin >> p;
    for (int i = 1; i<=p; ++i)
    {
        result = result * b;
    }
    cout <<"Result: "<<result;
}