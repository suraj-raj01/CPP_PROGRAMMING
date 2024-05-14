/*
33. Write a program to convert Binary to Decimal number system..
*/

#include<iostream>
using namespace std;
#include<math.h>
int main()
{
    int n;
    cout<<"enter the binary number: ";
    cin>>n;
    int bit;
    int res=0;
    int i=0;
    while(n!=0)
    {
        bit = n%10;
        if(bit==1){
        res = bit*pow(2,i)+res;
        }
        n/=10;
        i++;
    }
    cout<<"In decimal : "<<res;
}

/*
enter the binary number: 1000 
In decimal : 8
*/