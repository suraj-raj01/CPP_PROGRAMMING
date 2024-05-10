/*
1.Write a program to print all natural numbers from 1 to n. – using while loop
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int a = 1;
    while (n>=a)
    {
        cout<<a<<"  ";
        a++;
    }
}

/*
Enter the number : 20
1  2  3  4  5  6  7  8  9  10  11  12  13  14  15  16  17  18  19  20 
*/