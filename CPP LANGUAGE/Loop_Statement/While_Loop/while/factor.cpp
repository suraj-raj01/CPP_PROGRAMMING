// Write a program to display i of number.

#include <iostream>
using namespace std;
int main()
{
    int n, i = 1;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Factor of " << n << " = ";
    while (i <= n)
    {
        if (n % i == 0)
        {
            cout << i << "\t";
        }
        i++;
    }
    return 0;
}