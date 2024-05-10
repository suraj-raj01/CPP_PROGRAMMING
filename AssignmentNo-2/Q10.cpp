/*
10. Write a program to count number of digits in a number.
*/

#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cout<<"Enter the number: ";
    cin>>n;
    while (n!=0)
    {
        n = n/10;
        count++;
    }
    cout<<"Number of Digits: "<<count;
}

/*
Enter the number: 36578
Number of Digits: 5
*/