/*
8. Write a  program to input any alphabet and check whether it is vowel or consonant.
*/

#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter any character: ";
    cin>>ch;
    if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u')
    {
        cout<<"vowel";
    }
    else if(ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U')
    {
        cout<<"vowel";
    }
    else{
        cout<<"consonant";
    }
}

/*
Enter any character: u
vowel
OR,
Enter any character: D
consonant
*/