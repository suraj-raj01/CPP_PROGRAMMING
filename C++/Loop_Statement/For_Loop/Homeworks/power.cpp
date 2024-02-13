// WAP to print the power of number.

#include <iostream>
using namespace std;
int main()
{
    int b, p, result = 1;
    cout << "Enter the number: ";
    cin >> b;
    cout << "Enter the exponent: ";
    cin >> p;
    for (int i = p; i >= 1; i--)
    {
        result = result * b;
    }
    cout <<"result: "<<result;
}