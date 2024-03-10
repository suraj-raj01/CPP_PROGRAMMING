// WAP to print Square root of a number.

#include <iostream>
using namespace std;
int main()
{
    int n, r = 0;
    cout << "Enter the number: ";
    cin >> n;
    int i;
    for (i = 1; i <= n / 2; i++)
    {
        if (i * i == n)
        {
            n = 1;
            break;
        }
    }
    if (n == 1)
    {
        cout << "SquarRoot is: " << i;
    }
    else
    {
        cout << "invalid";
    }
}