// Write a program to print the absolute value
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter any number: ";
    cin>>num;
    if(num<0){
        cout<<"Absolute value: "<<-(num);
    }
    else{
        cout<<"Absolute value: "<<(int)num;
    }
    return 0;
}