// WAP to print reverse a number.

#include<iostream>
using namespace std;
int main(){
    int n,r,b=0;
    cout<<"Enter the number: ";
    cin>>n;
    while(n>0){
        r = n % 10;
        b = b * 10 + r;
        n = n / 10;
    }
    cout<<b;
}