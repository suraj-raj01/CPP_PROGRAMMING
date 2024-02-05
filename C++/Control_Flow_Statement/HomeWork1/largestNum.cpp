/* 
Write a program to find out the largest number between two
*/
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    if(a>b){
        cout<<a<<" is greater than "<<b<<"\n";
    }
    else{
        cout<<b<<" is greater than "<<a<<"\n";
    }
    return 0;
}