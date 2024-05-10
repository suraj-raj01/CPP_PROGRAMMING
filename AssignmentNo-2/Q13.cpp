/*
13. Write a program to swap first and last digits of a number.
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int firstDigit,lastDigit;
    lastDigit = n%10;
    firstDigit = n;
    while(firstDigit>=10)
    {
        firstDigit/=10;
    }
    cout<<"first digit: "<<firstDigit<<endl;
    cout<<"last digit: "<<lastDigit<<endl;

    firstDigit = firstDigit+lastDigit;
    lastDigit = firstDigit-lastDigit;
    firstDigit = firstDigit-lastDigit;

    cout<<"after swappint\n";
    cout<<"first digit: "<<firstDigit<<endl;
    cout<<"last digit: "<<lastDigit;
}

/*
Enter the number: 36548
first digit: 3
last digit: 8
after swappint
first digit: 8
last digit: 3
*/