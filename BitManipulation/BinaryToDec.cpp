//Decimal To Binary
#include<iostream>
using namespace std;
#include<math.h>
int main()
{
    int num;
    int bit;
    int i = 0;
    int ans = 0;
    cout<<"Enter the Decimal Number: ";
    cin>>num;
    while(num!=0)
    {
        bit = num%10;
        if(bit==1)
        {
        ans = bit*pow(2,i) + ans;
        }
        num=num/10;
        i++;
    }
    cout<<ans;  
}