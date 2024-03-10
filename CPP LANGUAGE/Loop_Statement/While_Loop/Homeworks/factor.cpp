// H/W --> Write a program to print the factor of a number.

#include<iostream>
using namespace std;
int main(){
    int n,factor=1;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"The factor of  "<<n<<" : ";
    while(factor<=n){
        if(n%factor==0){
            cout<<factor<<"  ";
        }
        factor++;
    }
}