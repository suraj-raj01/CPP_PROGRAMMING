/*
2. Write a  program to find maximum between three numbers.
*/

#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<"Enter the third number: ";
    cin>>c;
    if(a>b && a>c){
        cout<<a<< "is greater";
    }
    else if(b>a && b>c){
        cout<<b<<" is greater";
    }
    else{
        cout<<c<<" is greater";
    }
}

/*
Enter the first number: 10
Enter the second number: 20
Enter the third number: 15
20 is greater
*/