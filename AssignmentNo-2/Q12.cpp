/*
12. Write a program to find sum of first and last digit of a number.
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
    while (firstDigit>=10)
    {
        firstDigit = firstDigit/10;
    }
    cout<<"Sum of first and last digit: "<<firstDigit+lastDigit;
}

/*
Enter the number: 369854
Sum of first and last digit: 7
*/