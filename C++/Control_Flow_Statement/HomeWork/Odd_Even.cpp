// Write a program to find out the given number is even or odd.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number to check odd or even: ";
    cin>>n;
    if(n % 2 == 0){
        cout<<"Even number";
    }
    else{
        cout<<"Odd number";
    }
    return 0;
}