// WAP to find out the given character is vowel or consonant.
#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter the character to check vowel or consonant: ";
    cin >> ch;
    if ((ch == 'a' || 'A') || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' ||
        ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
    {
        cout << "Vowel";
    }
    else
    {
        cout << "Consonant";
    }
    return 0;
}