// WAP to print odd number till user input.

#include <iostream>
using namespace std;
int main()
{
    int a = 1, n;
    cout << "Enter the last limit: ";
    cin >> n;
    do
    {
        cout << a << "\n";
        a = a + 2;
    } while (a <= n);
}