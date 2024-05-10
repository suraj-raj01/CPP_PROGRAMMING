/*
10. Write a program to check whether a character is uppercase or lowercase alphabet.
*/

#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    if(ch>='A' && ch<='Z')
    {
        cout<<"Character in UpperCase";
    }
    else if(ch>='a' && ch<='z')
    {
        cout<<"Character in LowerCase";
    }
    else{
        cout<<"Not a Character!!!";
    }
}

/*
Enter a character: D
Character in UpperCase
OR,
Enter a character: d
Character in LowerCase
OR,
Enter a character: 5
Not a Character!!!
*/