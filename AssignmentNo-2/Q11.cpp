/*
11. Write a program to find first and last digit of a number.
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
        firstDigit = firstDigit/10;
    }
    cout<<"firtDigit: "<<firstDigit<<endl;
    cout<<"lastDigit: "<<lastDigit<<endl;
}

/*
Enter the number: 658132
firtDigit: 6
lastDigit: 2
*/