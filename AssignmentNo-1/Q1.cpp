// 1. Write a  program to find maximum between two numbers.

#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"Enter the value of b : ";
    cin>>b;
    if(a>b){
        cout<<a<<" is Greater than "<<b;
    }
    else{
        cout<<b<<" is Greater than "<<a;
    }
}

/*
Enter the value of a : 20
Enter the value of b : 30
30 is Greater than 20
*/