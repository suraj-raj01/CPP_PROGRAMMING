/*
2. Write a program to print all natural numbers in reverse (from n to 1). – using while loop
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    while(n>=1){
        cout<<n<<"  ";
        n--;
    }
}

/*
Enter the number: 20
20  19  18  17  16  15  14  13  12  11  10  9  8  7  6  5  4  3  2  1 
*/