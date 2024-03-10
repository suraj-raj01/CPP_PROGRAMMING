// Write a program to generate a table of any number.

#include <iostream>
using namespace std;
int main()
{
    int n, a = 1;
    cout << "enter the number: ";
    cin >> n;
    do
    {
        cout << n << " * " << a << " = " << n * a << "\n";
        a++;
    } while (a <= 10);
    return 0;
}