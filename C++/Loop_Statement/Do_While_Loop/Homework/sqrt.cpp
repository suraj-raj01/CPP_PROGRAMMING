// WAP to print square root of a number.

#include<iostream>
using namespace std;
int main()
{
    int n,i=1,r=0;
    cout<<"Enter the number: ";
    cin>>n;
    do{
      
      if(i*i==n)
      {
        n=1;
        break;
      }
      i++;

    }while (i<=n/2);
    if(n==1)
    {
        cout<<"square root: "<<i<<"\t";
    }
    else{
        cout<<"not valid";
    }
}