//Decimal To Binary
#include<iostream>
using namespace std;
#include<math.h>
int main()
{
    /*

    int a[10],n,i;
    cout<<"Enter the number: ";
    cin>>n;
    for(i=0; n>0; i++)
    {
        a[i] = n%2;
        n = n/2;
    }
    for(i=i-1; i>=0; i--)
    {
        cout<<a[i];
    }
    
    */

    int num;
    int bit;
    int i = 0;
    int ans = 0;
    cout<<"Enter the Decimal Number: ";
    cin>>num;
    while(num!=0)
    {
        bit = num&1;
        ans = bit*pow(10,i)+ans;
        num=num>>1;
        i++;
    }
    cout<<ans;  
}