/*
12. Write a program to input month number and print number of days in that month.
*/

#include<iostream>
using namespace std;
int main()
{
    int month;
    cout<<"Enter the month number: ";
    cin>>month;
    switch (month)
    {
    case 1:
        cout<<"January";
        break;
    case 2:
        cout<<"February";
        break;
    case 3:
        cout<<"March";
        break;
    case 4:
        cout<<"April";
        break;
    case 5:
        cout<<"May";
        break;
    case 6:
        cout<<"June";
        break;
    case 7:
        cout<<"July";
        break;
    case 8:
        cout<<"August";
        break;
    case 9:
        cout<<"september";
        break;
    case 10:
        cout<<"October";
        break;
    case 11:
        cout<<"November";
        break;
    case 12:
        cout<<"December";
        break;
    default:
        cout<<"Please enter number between(1-12)";
        break;
    }
}

/*
Enter the month number: 1
January
OR,
Enter the month number: 11
November
OR,
Enter the month number: 13
Please enter number between(1-12)
*/