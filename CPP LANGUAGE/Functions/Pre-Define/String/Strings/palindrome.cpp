// WAP to print Palindrome Number.
#include <iostream>
using namespace std;
#include <cstring>
int main()
{
    char c[10];
    cout << "enter string: ";
    cin >> c;
    int f = 0;
    int n = strlen(c);
    for (int i = 0; i < n; ++i)
    {
        if (c[i] != c[n - 1 - i])
        {
            f = 1;
            break;
        }
    }
    if (f == 0)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not Palindrome";
    }
}