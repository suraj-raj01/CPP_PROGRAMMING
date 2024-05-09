/*
6. Write a  program to check whether a year is leap year or not
*/

#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter the year: ";
    cin>>year;
    if(year%4==0 && (year%400 == 0 || year%100!=0))
    {
        cout<<"Leap Year";
    }
    else{
        cout<<"Not Leap Year";
    }
}
/*
Enter the year: 2008
Leap Year
*/