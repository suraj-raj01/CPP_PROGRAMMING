/*
11. Write a program to input week number and print week day.
*/

#include<iostream>
using namespace std;
int main()
{
    int opr;
    cout<<"Enter the week day: ";
    cin>>opr;
    switch (opr)
    {
    case 1:
        cout<<"Monday";
        break;
    case 2:
        cout<<"Tuesday";
        break;
    case 3:
        cout<<"Wednesday";
        break;
    case 4:
        cout<<"Thursday";
        break;
    case 5:
        cout<<"Friday";
        break;
    case 6:
        cout<<"Saturday";
        break;
    case 7:
        cout<<"Sunday";
        break;    
    default:
        cout<<"Please enter number between(1-7)!!!";
        break;
    }
}

/*
Enter the week day: 4
Thrusday
OR,
Enter the week day: 8
Please enter number between(1-7)!!!
*/