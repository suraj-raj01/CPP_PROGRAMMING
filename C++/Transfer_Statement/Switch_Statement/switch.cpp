#include<iostream>
using namespace std;
int main(){
    int a,b,n;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second nubmer: ";
    cin>>b;
    cout<<"select 1 for addition 2 for mul: ";
    cin>>n;
    switch (n)
    {
    case 1:
    {
        cout<<"addition: "<<a+b;
        break;
    }
    case 2:
    {
        cout<<"mult: "<<a*b;
        break;
    }
    default:
        cout<<"invalid choice!";
        break;
    }
}