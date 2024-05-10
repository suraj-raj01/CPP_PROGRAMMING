/*
7. Write a program to check whether a character is alphabet or not.
*/

#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    if(ch>='A' && ch<='Z' || ch>='a' && ch<='z')
    {
        cout<<"Alphabets!!";
    }
    else{
        cout<<"Not Alphabets!!";
    }
}

/*
Enter a character: a
Alphabets!!

OR,

Enter a character: Z
Alphabets!!

OR,

Enter a character: 8
Not Alphabets!!
*/