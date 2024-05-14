/*
34. Write a program to convert Decimal to Binary number system.
*/

#include<iostream>
using namespace std;
#include<math.h>
int main()
{
    int n;
    cout<<"Enter the decimal number: ";
    cin>>n;
    int i=0; 
    int bit;
    int res = 0;
    while(n!=0)
    {
        bit = n&1;
        res = bit*pow(10,i)+res;
        n=n>>1;
        i++;
    }
    cout<<"In Binary : "<<res;
}

/*
Enter the decimal number: 8
In Binary : 1000
*/