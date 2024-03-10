#include <iostream>
using namespace std;
int main()
{
    int n, a = 1;
    cout << "Enter the number: ";
    cin >> n;
prnt:
    cout << n << " * " << a << " = " << a * n << endl;
    a++;
    if (a <= 10)
    {
        goto prnt;
    }
    return 0;
}