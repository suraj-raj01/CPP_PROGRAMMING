/*
9. Write a  program to input any character and check whether it is alphabet, digit 
or special character.
*/

#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter the character: ";
    cin>>ch;
    if(ch>='A' && ch<='Z'){
        cout<<"Alphabet";
    }
    else if(ch=='1' || ch=='2' || ch=='3' || ch=='4' || ch=='5' || ch=='6' ||ch=='7' || ch=='8' || ch=='9' || ch=='0' ){
        cout<<"Digit";
    }
    else{
        cout<<"Special Character!!";
    }
}

/*
enter the character: D
Alphabet
OR,
enter the character: 5
Digit
OR,
enter the character: #
Special Character!!
*/