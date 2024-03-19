// WAP to reverse a String in cpp

#include <iostream>
using namespace std;
#include <cstring>
int main()
{
    char str[20];
    cout << "Enter your name: ";
    cin >> str;
    int n = strlen(str);
    for (int i = n; i >= 0; i--)
    {
        cout << str[i];
    }
}
