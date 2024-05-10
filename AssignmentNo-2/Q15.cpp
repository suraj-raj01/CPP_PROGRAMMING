/*
15. Write a  program to calculate product of digits of a number.
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int product = 1;
    while(n>0)
    {
        product = product*(n%10);
        n = n/10;
    }
    cout<<"Product of digit: "<<product;
}

/*
Enter the number: 3215
Product of digit: 30
*/