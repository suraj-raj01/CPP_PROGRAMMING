// WAP to add first number and last number

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the 4 number: ";
    cin>>n;
    int first,last;
    if(n>1000 && n<10000){
    first = n/1000;
    last = n%100%10;
    cout<<"sum is: "<<first+last;
    }
    else{
        cout<<"Please Enter 4 digit number!!";
    }
}