// WAP to generate Lowercase String to UpperCase String

#include <iostream>
using namespace std;
#include <cstring>
int main()
{
    char c[10];
    cout << "Enter your name: ";
    cin >> c;
    int len = strlen(c);
    for (int i = 0; i < len; ++i)
    {
        c[i] = c[i] + 32;
    }
    cout << c;
}