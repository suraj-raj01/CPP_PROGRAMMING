#include <iostream>
using namespace std;
#include <cstring>
int main()
{
    char c1[10];
    char c2[10];
    cout << "Enter name: ";
    cin.getline(c1,10);
    strcpy(c2, c1);
    strrev(c1);
    if (stricmp(c1, c2) == 0)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not Palindrome!";
    }
}

/*

1. WAP to display the string in ascending order.
2. Write a string to count the maximum frequency of any character.
*/