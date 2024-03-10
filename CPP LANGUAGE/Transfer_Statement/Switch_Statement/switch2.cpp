#include<iostream>
using namespace std;
int main(){
    int a,b;
    char n;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second nubmer: ";
    cin>>b;
    cout<<"select 'a' for addition 'm' for mul: ";
    cin>>n;
    switch (n)
    {
    case 'a':
    case 'A':
    {
        cout<<"addition: "<<a+b;
        break;
    }
    case 'm':
    case 'M':
    {
        cout<<"mult: "<<a*b;
        break;
    }
    default:
        cout<<"invalid choice!";
        break;
    }
}